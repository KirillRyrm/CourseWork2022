#include <algorithm>
#include "Team.h"
#include "Player.h"
#include "Coach.h"

using namespace std;

Team::Team(std::string name, std::string country, std::vector<Player*>& players, std::vector<Coach*>& coaches):
{

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
    players.push_back(tmp);

}

void Team::AddCoach(Coach* coach)
{
        if(find(coaches.begin(), coaches.end(), coach) != coaches.end())
    {
        throw invalid_argument("Coach found");
    }
    coaches.push_back(tmp);
}

void Team::Print()
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
