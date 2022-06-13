#ifndef MATCHMAKING_H
#define MATCHMAKING_H


class Matchmaking
{
    public:
        Matchmaking(Team* team1, Team* team2);
        void FixScore(int score1, int score2);

        unsigned int GetCounter() { return m_Counter; }
        void SetCounter(unsigned int val) { m_Counter = val; }


    private:
        int score1;
        int score2;
        TacticalScheme* tacticalscheme1;
        TacticalScheme* tacticalscheme2;
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
