#include <iostream>
#include <stdexcept>
#include <algorithm>
#include "Team.h"
#include "Player.h"
#include "Coach.h"

using namespace std;

Team::Team(string name, string country, vector<Player*>& players, vector<Coach*>& coaches)
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
        throw invalid_argument("Player not found");
    }
    Player* tmp = player;
    delete player;
    players.erase(tmp);
}

void Team::RemoveCoach(Coach* coach)
{
    if(find(coaches.begin(), coaches.end(), coach) == coaches.end())
    {
        throw invalid_argument("Coach not found");
    }
    Coach* tmp = coach;
    delete coach;
    coaches.erase(tmp);
}

void Team::AddPlayer(Player* player)
{

    if(find(players.begin(), players.end(), player) != players.end())
    {
        throw invalid_argument("Player found");
    }
    Player* tmp = player;
    players.push_back(tmp);

}

void Team::AddCoach(Coach* coach)
{
        if(find(coaches.begin(), coaches.end(), coach) != coaches.end())
    {
        throw invalid_argument("Coach found");
    }
    Coach* tmp = coach;
    coaches.push_back(tmp);
}

void Team::Print() const
{
   cout << ("Название команды: " + name + ";\n" + "Страна: " + country + ";\n");
   cout << "Состав команды:\n";
   for(auto player : players)
   {
       cout << player->Info();
       cout << endl;
   }
   cout << "Тренеры:\n";
   for(auto coach : coaches)
   {
       cout << coach->Info();
       cout << endl;
   }
}

void Team::TeamInfo() const
{
    return ("Название команды: " + name + ";\n" + "Страна: " + country + ";\n");
}
