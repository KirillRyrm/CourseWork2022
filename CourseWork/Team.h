#ifndef TEAM_H
#define TEAM_H

#include <vector>
#include "Player.h"
#include "Coach.h"

class Team : public Player
{
    public:
        Team(std::string name, std::string country, std::vector<Player*>& players, std::vector<Coach*>& coaches);
        std::string GetName() const { return name; }
        std::string GetCountry() const { return country; }
        bool isTeamFull() const;

    private:
       std::string name;
       std::string country;
       std::vector<Player*> players;
       std::vector<Coach*> coaches;
};

#endif // TEAM_H
