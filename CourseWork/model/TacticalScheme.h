#ifndef TACTICALSCHEME_H
#define TACTICALSCHEME_H

#include <vector>
#include "model/person/Player.h"



class TacticalScheme
{
    public:
        TacticalScheme();
        TacticalScheme(int defenders, int midfielders, int strikers, int goalkeepers = 1);

        int GetGoalkeepers() const { return goalkeepers; }
        int GetDefenders() const { return defenders; }
        int GetMidfielders() const { return midfielders; }
        int GetStrikers() const { return strikers; }

        void SetGoalkeepers(const int& goalkeepers);
        void SetDefenders(const int& defenders);
        void SetMidfielders(const int& midfielders);
        void SetStrikers(const int& strikers);

        bool isPlayersEnough() const;

        std::string Info() const;

        std::string GetTacticalSchemeInfo() const;
    friend std::ostream& operator<<(std::ostream& os, const TacticalScheme& dt);

    private:
        int goalkeepers, defenders, midfielders, strikers;
};

#endif // TACTICALSCHEME_H
