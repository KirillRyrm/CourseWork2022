#ifndef COURSEWORK2022_TEAMCONTROLLER_H
#define COURSEWORK2022_TEAMCONTROLLER_H


#include <vector>
#include <algorithm>
#include "model/Team.h"

class TeamController {
    std::vector<Team*> teams;


public:
    void create(){
        std::string name, country;
        std::cout<<"name >";
        std::cin>>name;
        std::cout<<"country >";
        std::cin>>country;

        try {
            teams.push_back(new Team(name, country));
        }catch (std::exception &e){
            std::cerr<<"please type name or country\n";
        }
    }

    void print(){
        for (int i = 0; i < teams.size(); ++i) {
            std::cout<<"id: "<<i<<"\n";
            std::cout<<(*teams.at(i));
        }
    }

    void setCoach(Coach* coach){
        std::cout<<"id >";
        int id;
        std::cin>>id;
        this->teams.at(id)->AddCoach(coach);
    }

    Team* selectTeam(){
        std::cout<<"id >";
        int id;
        std::cin>>id;
        return this->teams.at(id);
    }

    void addPlayer(Team* const& team, Player *const &pPlayer) {
        team->AddPlayer(pPlayer);
    }

    Coach *getCoach(Team *pTeam) {
        return pTeam->getCoach();
    }

    void selectPlayersWithTactic(Team *pTeam, TacticalScheme *pScheme) {
        std::cerr<<"select defenders: " << pScheme->GetDefenders() <<"\n";
        for (const auto &item: selectByPosition(pScheme->GetDefenders(), Position::defender, pTeam)){
            pTeam->AddTrained(item);
        }
        std::cerr<<"select goalkeeper: "<< pScheme->GetGoalkeepers() <<"\n";
        for (const auto &item: selectByPosition(pScheme->GetGoalkeepers(), Position::goalkeeper, pTeam)){
            pTeam->AddTrained(item);
        }
        std::cerr<<"select midfielder: " << pScheme->GetMidfielders() <<"\n";
        for (const auto &item: selectByPosition(pScheme->GetMidfielders(), Position::midfielder, pTeam)){
            pTeam->AddTrained(item);
        }
        std::cerr<<"select striker: " << pScheme->GetStrikers() <<"\n";
        for (const auto &item: selectByPosition(pScheme->GetStrikers(), Position::striker, pTeam)){
            pTeam->AddTrained(item);
        }
    }

    void printTrained(Team* pTeam){
        for (const auto &item: pTeam->getTrained()){
            std::cout<<(*item);
        }
    }
    struct compare
    {
        Player* key;
        compare(Player* const &i): key(i) {}

        bool operator()(Player* const &i) {
            return (i == key);
        }
    };


    std::vector<Player*>  selectByPosition(int amount, Position position, Team* pTeam){
        for (int i = 0; i < pTeam->getPlayers().size(); ++i) {
            if(pTeam->getPlayers().at(i)->GetPosition()==position){
                std::cout<<"id: "<<i<<"\n";
                std::cout<<(*pTeam->getPlayers().at(i));
            }
        }
        std::vector<Player*> p;
        for (int i = 0; i < amount; ++i) {
            std::cout<<"id >";
            int id;
            std::cin>>id;
            if(std::find_if(p.begin(), p.end(), compare(pTeam->getPlayers().at(i)))!=p.end()){
                i--;
                std::cout<<"player already selected";
                continue;
            }
            p.push_back(pTeam->getPlayers().at(i));
        }
        return p;
    }



};


#endif //COURSEWORK2022_TEAMCONTROLLER_H
