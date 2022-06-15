#ifndef COURSEWORK2022_CREATECOACHCOMMAND_H
#define COURSEWORK2022_CREATECOACHCOMMAND_H
#include "cli/ICommand.h"
#include "AppContext.h"

class CreateCoachCommand : public ICommand{
public:
    void handle(AppContext *context, std::vector<std::string> args) {
        context->getTacticController()->print();
        std::vector<TacticalScheme*> schemes = context->getTacticController()->selectTactics();
        context->getCoachController()->create(schemes);

    }

    std::string getName() override {
        return "create";
    }

    std::string getAliases() override {
        return "create new coach";
    }
};


#endif //COURSEWORK2022_CREATECOACHCOMMAND_H
