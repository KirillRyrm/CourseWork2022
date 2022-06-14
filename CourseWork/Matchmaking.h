#ifndef MATCHMAKING_H
#define MATCHMAKING_H

#include "Player.h"
#include "Team.h"
#include "Coach.h"

class Matchmaking
{
    public:
        Matchmaking(Team* team1, Team* team2);
        void FixScore(int score1, int score2);
        void CreateMatch() const;
        void SetTacticalScheme1(TacticalScheme* tS1) { tacticalscheme1 = tS1; }
        void SetTacticalScheme2(TacticalScheme* tS2) { tacticalscheme2 = tS2; }


    private:
        int score1;
        int score2;
        TacticalScheme* tacticalscheme1;
        TacticalScheme* tacticalscheme2;
        std::vector<Player*> players1;
        std::vector<Player*> players2;
        Team* team1;
        Team* team2;
};

#endif // MATCHMAKING_H




/*Введите название первой команды - ...accumulate
Подберите тактическую сзему для первой команды - 3 5 2
Введите назване второй команды - ...accumulate
Подберите для второй команды - 4 3 3
Вывести список игроков матча первой команды
Вывести список игроков матча второй команды*/
