#ifndef TEAM_H
#define TEAM_H

#include <vector>
#include "model/person/Player.h"
#include "model/person/Coach.h"

class Matchmaking;
class Team
{
    public:
        Team(std::string& name, std::string& country);
        void AddPlayer(Player* player);
        void AddTrained(Player* player);
        void RemovePlayer(Player* player);
        void AddCoach(Coach* coach);
        void RemoveCoach();
        std::string GetName() const { return name; }
        std::string GetCountry() const { return country; }
        friend std::ostream& operator<<(std::ostream& os, const Team& dt);

    const std::string &getName() const;

    const std::string &getCountry() const;

    const std::vector<Player *> &getPlayers() const;

    Coach *getCoach() const;

    const std::vector<Player *> &getTrained() const;



private:
       std::string name;
       std::string country;
       std::vector<Player*> players;
       std::vector<Player*> trained;
       Coach* coach = nullptr;
};

#endif // TEAM_H
