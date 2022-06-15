#ifndef COURSEWORK2022_TACTICCONTROLLER_H
#define COURSEWORK2022_TACTICCONTROLLER_H


#include <vector>
#include <cassert>
#define assertm(exp, msg) assert(((void)msg, exp))
#include "model/TacticalScheme.h"

class TacticController {
        std::vector<TacticalScheme*> tactics;
public:
    void create(){
        int defenders, midfielders, strikers;
        std::cout<<"defenders > ";
        std::cin>>defenders;
        std::cout<<"midfielders > ";
        std::cin>>midfielders;
        std::cout<<"strikers > ";
        std::cin>>strikers;
        try {
            TacticalScheme *tactic = new TacticalScheme(defenders, midfielders, strikers);
            this->tactics.push_back(tactic);
        }catch (std::exception e){
            std::cout<<"wrong player count";
        }
    }

    void print(){
        for (int i = 0; i <tactics.size(); ++i) {
            std::cout<<"id: "<<i<<"\n";
            std::cout<<(*tactics.at(i));
        }
    }

    std::vector<TacticalScheme*> selectTactics(){
        int id;
        std::vector<TacticalScheme*> schemes;
        do{
            std::cout<<"id >";
            std::cin>>id;
            try {
                schemes.push_back(this->tactics.at(id));
            }catch (std::exception e){
                id=-1;
            }
        } while (id!=-1);
        return schemes;
    }
};


#endif //COURSEWORK2022_TACTICCONTROLLER_H
