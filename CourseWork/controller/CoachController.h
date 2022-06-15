#ifndef COURSEWORK2022_COACHCONTROLLER_H
#define COURSEWORK2022_COACHCONTROLLER_H


#include <vector>
#include "model/person/Coach.h"

class CoachController {
    std::vector<Coach*> coaches = std::vector<Coach*>();

    Coach* getCoach(){
        int id;
        std::cout<<"id >";
        std::cin>>id;
        return coaches.at(id);
    }

public:
    void create(std::vector<TacticalScheme*>& schemes){
        std::string first_name;
        std::string last_name;
        std::string middle_name;
        int age;
        double height;
        int experience;

        std::cout<<"first name >";
        std::cin>>first_name;

        std::cout<<"last name >";
        std::cin>>last_name;

        std::cout<<"middle name >";
        std::cin>>middle_name;

        std::cout<<"age >";
        std::cin>>age;

        std::cout<<"height >";
        std::cin>>height;

        std::cout<<"experience >";
        std::cin>>experience;


        auto *p = new Coach(first_name, last_name, middle_name,
                               age, height, experience, schemes);
        this->coaches.push_back(p);
    }

    Coach *selectCoach() {
        int id;
        std::cout<<"id >";
        std::cin>>id;
        return coaches.at(id);
    }

    void print(){
        for (int i = 0; i < coaches.size(); ++i) {
            std::cout<<"id: "<<i<<"\n";
            std::cout<<(*coaches.at(i));
        }
    }

    TacticalScheme *sellectTactic(Coach *pCoach) {
        for (int i = 0; i < pCoach->getTacticalSchemes().size(); ++i) {
            std::cout<<"id: "<<i<<"\n";
            std::cout<<(*pCoach->getTacticalSchemes().at(i));
        }
        int id;
        std::cout<<"id >";
        std::cin>>id;
        return pCoach->getTacticalSchemes().at(id);
    }
};


#endif //COURSEWORK2022_COACHCONTROLLER_H
