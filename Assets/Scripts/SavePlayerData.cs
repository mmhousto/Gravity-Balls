using System;

[Serializable]
public class SavePlayerData
{
    public int hiScore, skillHiScore, coins, paddleNum;
    public int plays, wins, losses;
    public string paddlePath;
    public int ownPaddle1 = 1;
    public int ownPaddle2 = 0;
    public int ownPaddle3 = 0;
    public int ownPaddle4 = 0;
    public int ownPaddle5 = 0;

    public SavePlayerData(PlayerData player)
    {
        hiScore = player.hiScore;
        skillHiScore = player.skillHiScore;
        coins = player.coins;
        paddleNum = player.paddleNum;
        plays = player.plays;
        wins = player.wins;
        losses = player.losses;
        paddlePath = player.paddlePath;
        ownPaddle1 = player.ownPaddle1;
        ownPaddle2 = player.ownPaddle2;
        ownPaddle3 = player.ownPaddle3;
        ownPaddle4 = player.ownPaddle4;
        ownPaddle5 = player.ownPaddle5;

    }
}
