
#ifndef COURSEWORK2022_SELECTCOACHCOMMAND_H
#define COURSEWORK2022_SELECTCOACHCOMMAND_H

#include "cli/ICommand.h"
#include "AppContext.h"

class SelectCoachCommand : public ICommand{

public:
    void handle(AppContext *context, std::vector<std::string> args)  {
        context->getCoachController()->print();
        Coach* c = context->getCoachController()->selectCoach();
        context->getTeamController()->print();
        context->getTeamController()->setCoach(c);
    }

    std::string getName() override {
        return "setCoach";
    }

    std::string getAliases() override {
        return "set team coach";
    }

};


#endif //COURSEWORK2022_SELECTCOACHCOMMAND_H
