#ifndef COURSEWORK2022_PRINTTRAINED_H
#define COURSEWORK2022_PRINTTRAINED_H

#include "cli/ICommand.h"
#include "AppContext.h"

class PrintTrained : public ICommand{

    void handle(AppContext *context, std::vector<std::string> args) {
        context->getTeamController()->print();
        Team* team = context->getTeamController()->selectTeam();
        context->getTeamController()->printTrained(team);
    }

    std::string getName() override {
        return "printTrained";
    }

    std::string getAliases() override {
        return "print trained players from command";
    }

};


#endif //COURSEWORK2022_PRINTTRAINED_H
