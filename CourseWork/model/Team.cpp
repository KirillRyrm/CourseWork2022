#include <iostream>
#include <stdexcept>
#include <algorithm>
#include <iomanip>
#include "Team.h"
#include "model/person/Player.h"
#include "model/person/Coach.h"

using namespace std;

Team::Team(string& name, string& country): name(name), country(country)
{
    if(name == "\0" || country == "\0")
    {
        throw invalid_argument("Wrong values");
    }
}

void Team::RemovePlayer(Player* player)
{
    if(find(players.begin(), players.end(), player) == players.end())
    {
        throw invalid_argument("person not found");
    }
    Player* tmp = player;
    delete player;

}

void Team::RemoveCoach()
{
    this->coach = nullptr;

}

void Team::AddPlayer(Player* player)
{

    if(find(players.begin(), players.end(), player) != players.end())
    {
        throw invalid_argument("person found");
    }
    Player* tmp = player;
    players.push_back(tmp);

}

void Team::AddCoach(Coach* coach)
{
    this->coach = coach;
}


std::ostream &operator<<(ostream &os, const Team &dt) {
    int width = 40;
    os << std::left << std::string( width, '-' )<<"\n";
    os << std::left << std::setw(39) << ("| name: "    +  dt.name)                        << "|" << std::endl;
    os << std::left << std::setw(39) << ("| country: " +  dt.country)                     << "|" << std::endl;
    os << std::left << std::setw(39) << ("| coach: "   + (dt.coach== nullptr?"none": dt.coach->getFirstName()))       << "|" << std::endl;
    os << std::left << std::setw(39) << ("| members: "  +  std::to_string(dt.players.size()))       << "|" << std::endl;
    os << std::left << std::setw(39) << ("| trained: "   + std::to_string(dt.trained.size()))       << "|" << std::endl;

    os<<std::string( width, '-' )<<"\n";;
    return os;
}

const string &Team::getName() const {
    return name;
}

const string &Team::getCountry() const {
    return country;
}

const vector<Player *> &Team::getPlayers() const {
    return players;
}

Coach *Team::getCoach() const {
    return coach;
}

const vector<Player *> &Team::getTrained() const {
    return trained;
}

void Team::AddTrained(Player *player) {
    this->trained.push_back(player);
}

