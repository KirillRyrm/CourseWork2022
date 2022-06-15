#ifndef COURSEWORK2022_TRAINPLAYERSCOMMAND_H
#define COURSEWORK2022_TRAINPLAYERSCOMMAND_H

#include "cli/ICommand.h"
#include "AppContext.h"

class TrainPlayersCommand : public ICommand{

public:
    void handle(AppContext *context, std::vector<std::string> args) {
        context->getTeamController()->print();
        Team* team = context->getTeamController()->selectTeam();
        Coach* coach = context->getTeamController()->getCoach(team);
        TacticalScheme* tacticalScheme = context->getCoachController()->sellectTactic(coach);
        context->getTeamController()->selectPlayersWithTactic(team, tacticalScheme);
    }

    std::string getName() override {
        return "train";
    }

    std::string getAliases() override {
        return "train players with tactic";
    }

};


#endif //COURSEWORK2022_TRAINPLAYERSCOMMAND_H
