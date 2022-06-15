#ifndef COURSEWORK2022_CREATEPLAYERCOMMAND_H
#define COURSEWORK2022_CREATEPLAYERCOMMAND_H
#include "cli/ICommand.h"
#include "AppContext.h"

class CreatePlayerCommand : public ICommand{
public:
    void handle(AppContext *context, std::vector<std::string> args) {
        context->getPlayerController()->createPlayer();
    }

    std::string getName() override {
        return "create";
    }

    std::string getAliases() override {
        return "create new player";
    }
};


#endif //COURSEWORK2022_CREATEPLAYERCOMMAND_H
