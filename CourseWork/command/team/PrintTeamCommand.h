#ifndef COURSEWORK2022_PRINTTEAMCOMMAND_H
#define COURSEWORK2022_PRINTTEAMCOMMAND_H

#include "cli/ICommand.h"
#include "AppContext.h"

class PrintTeamCommand : public ICommand{

public:
    void handle(AppContext *context, std::vector<std::string> args) {
        context->getTeamController()->print();
    }

    std::string getName() override {
        return "print";
    }

    std::string getAliases() override {
        return "print team";
    }

};


#endif //COURSEWORK2022_PRINTTEAMCOMMAND_H
