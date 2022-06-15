#ifndef COURSEWORK2022_CREATETACTICCOMMAND_H
#define COURSEWORK2022_CREATETACTICCOMMAND_H

#include "cli/ICommand.h"
#include "AppContext.h"

class CreateTacticCommand : public ICommand{
public:
    void handle(AppContext *context, std::vector<std::string> args) {
        context->getTacticController()->create();
    }

    std::string getName() override {
        return "create";
    }

    std::string getAliases() override {
        return "create tactic";
    }
};


#endif //COURSEWORK2022_CREATETACTICCOMMAND_H
