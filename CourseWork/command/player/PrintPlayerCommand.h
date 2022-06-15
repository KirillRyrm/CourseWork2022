#ifndef COURSEWORK2022_PRINTPLAYERCOMMAND_H
#define COURSEWORK2022_PRINTPLAYERCOMMAND_H
#include "cli/ICommand.h"
#include "AppContext.h"

class PrintPlayerCommand : public ICommand{
public:
    void handle(AppContext *context, std::vector<std::string> args) {
        context->getPlayerController()->print();
    }

    std::string getName() override {
        return "print";
    }

    std::string getAliases() override {
        return "print all players";
    }
};


#endif //COURSEWORK2022_PRINTPLAYERCOMMAND_H
