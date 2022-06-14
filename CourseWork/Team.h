#ifndef TEAM_H
#define TEAM_H

#include <vector>
#include "Player.h"
#include "Coach.h"

class Matchmaking;
class Team
{
    public:
        Team(std::string name, std::string country, std::vector<Player*>& players, std::vector<Coach*>& coaches);
        void AddPlayer(Player* player);
        void RemovePlayer(Player* player);
        void AddCoach(Coach* coach);
        void RemoveCoach(Coach* coach);
        void Print() const;
        std::string GetName() const { return name; }
        std::string GetCountry() const { return country; }
        std::string TeamInfo() const;

    private:
       std::string name;
       std::string country;
       std::vector<Player*> players;
       std::vector<Coach*> coaches;
};

#endif // TEAM_H
