#ifndef COURSEWORK2022_MANAGEPLAYERCOMMAND_H
#define COURSEWORK2022_MANAGEPLAYERCOMMAND_H

#include "cli/ICommand.h"
#include "AppContext.h"
#include "cli/CommandManager.h"
#include "CreatePlayerCommand.h"
#include "PrintPlayerCommand.h"
#include "GenRandomCommand.h"

class ManagePlayerCommand : public ICommand{
    CommandManager* PlayerCommandsManager;
public:

    ManagePlayerCommand(){
        this->PlayerCommandsManager = new CommandManager();
        this->PlayerCommandsManager->addCommand(new CreatePlayerCommand());
        this->PlayerCommandsManager->addCommand(new PrintPlayerCommand());
        this->PlayerCommandsManager->addCommand(new GenRandomCommand());
        this->PlayerCommandsManager->addCommand(new ExitCommand());
    }

    void handle(AppContext *context, std::vector<std::string> args) {
        while (context->isRunning()) {
            std::cout << *(this->PlayerCommandsManager);
            std::string command;
            std::cin >> command;
            this->PlayerCommandsManager->handle(context, command);
        }
        context->run();
    }

    std::string getName() override {
        return "managePlayers";
    }

    std::string getAliases() override {
        return "manage all players";
    }
};


#endif //COURSEWORK2022_MANAGEPLAYERCOMMAND_H
