#ifndef TACTICALSCHEME_H
#define TACTICALSCHEME_H

#include <vector>

class TacticalScheme
{
    public:
        TacticalScheme(int goalkeepers, int defenders, int midfielders, int strikers);

        int GetGoalkeepers() const { return goalkeepers; }
        int GetDefenders() const { return defenders; }
        int GetMidfielders() const { return midfielders; }
        int GetStrikers() const { return strikers; }

        void SetGoalkeepers(const int& goalkeepers);
        void SetDefenders(const int& defenders);
        void SetMidfielders(const int& midfielders);
        void SetStrikers(const int& strikers);

        bool isPlayersEnough() const;

        std::string GetTacticalSchemeInfo() const;


    private:
        int goalkeepers, defenders, midfielders, strikers;
};

#endif // TACTICALSCHEME_H
