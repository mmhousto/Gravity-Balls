#include "CVTextureCache.h"

#include "DisplayManager.h"

#include <OpenGLES/ES2/glext.h>
#include <OpenGLES/ES3/gl.h>
#include <OpenGLES/ES3/glext.h>
#include <CoreVideo/CVOpenGLESTextureCache.h>

#include "UnityMetalSupport.h"
#if UNITY_CAN_USE_METAL
    #include <CoreVideo/CVMetalTextureCache.h>
#else

typedef void* CVMetalTextureCacheRef;
typedef void* CVMetalTextureRef;

const CFStringRef kCVPixelBufferMetalCompatibilityKey = CFSTR("MetalCompatibility");
inline CVReturn         CVMetalTextureCacheCreate(CFAllocatorRef, CFDictionaryRef, MTLDeviceRef, CFDictionaryRef, CVMetalTextureCacheRef*)  { return 0; }
inline CVReturn         CVMetalTextureCacheCreateTextureFromImage(CFAllocatorRef, CVMetalTextureCacheRef, CVImageBufferRef, CFDictionaryRef, MTLPixelFormat, size_t, size_t, size_t, CVMetalTextureRef*)    { return 0; }
inline void             CVMetalTextureCacheFlush(CVMetalTextureCacheRef, uint64_t options)  {}
inline MTLTextureRef    CVMetalTextureGetTexture(CVMetalTextureRef) { return nil; }
inline Boolean          CVMetalTextureIsFlipped(CVMetalTextureRef)  { return 0; }

#endif


void* CreateCVTextureCache()
{
    void* ret = 0;

    CVReturn err = 0;
    if (UnitySelectedRenderingAPI() == apiMetal)
        err = CVMetalTextureCacheCreate(kCFAllocatorDefault, 0, UnityGetMetalDevice(), 0, (CVMetalTextureCacheRef*)&ret);

    if (err)
    {
        ::printf("Error at CVOpenGLESTextureCacheCreate: %d", err);
        ret = 0;
    }
    return ret;
}

void FlushCVTextureCache(void* cache)
{
    if (UnitySelectedRenderingAPI() == apiMetal)
        CVMetalTextureCacheFlush((CVMetalTextureCacheRef)cache, 0);
}

void* CreateBGRA32TextureFromCVTextureCache(void* cache, void* image, size_t w, size_t h)
{
    void* texture = 0;

    CVReturn err = 0;
    if (UnitySelectedRenderingAPI() == apiMetal)
    {
        err = CVMetalTextureCacheCreateTextureFromImage(
            kCFAllocatorDefault, (CVMetalTextureCacheRef)cache, (CVImageBufferRef)image, 0,
            (MTLPixelFormat)((UnityDisplaySurfaceMTL*)GetMainDisplaySurface())->colorFormat, w, h, 0, (CVMetalTextureRef*)&texture
        );
    }

    if (err)
    {
        ::printf("Error at CVOpenGLESTextureCacheCreateTextureFromImage: %d\n", err);
        texture = 0;
    }
    return texture;
}

void* CreateHalfFloatTextureFromCVTextureCache(void* cache, void* image, size_t w, size_t h)
{
    void* texture = 0;

    CVReturn err = 0;
    if (UnitySelectedRenderingAPI() == apiMetal)
    {
        err = CVMetalTextureCacheCreateTextureFromImage(
            kCFAllocatorDefault, (CVMetalTextureCacheRef)cache, (CVImageBufferRef)image, 0,
            MTLPixelFormatR16Float, w, h, 0, (CVMetalTextureRef*)&texture
        );
    }

    if (err)
    {
        ::printf("Error at CVOpenGLESTextureCacheCreateTextureFromImage: %d\n", err);
        texture = 0;
    }
    return texture;
}

id<MTLTexture> GetMetalTextureFromCVTextureCache(void* texture)
{
    assert(UnitySelectedRenderingAPI() == apiMetal);
    return CVMetalTextureGetTexture((CVMetalTextureRef)texture);
}

uintptr_t GetTextureFromCVTextureCache(void* texture)
{
    if (UnitySelectedRenderingAPI() == apiMetal)
        return (uintptr_t)(__bridge void*)GetMetalTextureFromCVTextureCache(texture);
    return 0;
}

void* CreatePixelBufferForCVTextureCache(size_t w, size_t h)
{
    CVPixelBufferRef pb = 0;
    NSDictionary* options = @{  (__bridge NSString*)kCVPixelBufferPixelFormatTypeKey: @(kCVPixelFormatType_32BGRA),
                                (__bridge NSString*)kCVPixelBufferWidthKey: @(w),
                                (__bridge NSString*)kCVPixelBufferHeightKey: @(h),
                                (__bridge NSString*)kCVPixelBufferMetalCompatibilityKey: @(YES),
                                (__bridge NSString*)kCVPixelBufferIOSurfacePropertiesKey: @{}};

    CVPixelBufferCreate(kCFAllocatorDefault, w, h, kCVPixelFormatType_32BGRA, (__bridge CFDictionaryRef)options, &pb);
    return pb;
}

void* CreateReadableRTFromCVTextureCache(void* cache, size_t w, size_t h, void** pb)
{
    *pb = CreatePixelBufferForCVTextureCache(w, h);
    return CreateBGRA32TextureFromCVTextureCache(cache, *pb, w, h);
}

int IsCVTextureFlipped(void* texture)
{
    if (UnitySelectedRenderingAPI() == apiMetal)
        return CVMetalTextureIsFlipped((CVMetalTextureRef)texture);
    return 0;
}
