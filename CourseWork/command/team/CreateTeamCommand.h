#ifndef COURSEWORK2022_CREATETEAMCOMMAND_H
#define COURSEWORK2022_CREATETEAMCOMMAND_H

#include "cli/ICommand.h"
#include "cli/CommandManager.h"
#include "AppContext.h"

class CreateTeamCommand : public ICommand{

public:
    void handle(AppContext *context, std::vector<std::string> args) {
        context->getTeamController()->create();
    }

    std::string getName() override {
        return "create";
    }

    std::string getAliases() override {
        return "create new team";
    }

};


#endif //COURSEWORK2022_CREATETEAMCOMMAND_H
