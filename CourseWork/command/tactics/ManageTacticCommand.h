#ifndef COURSEWORK2022_MANAGETACTICCOMMAND_H
#define COURSEWORK2022_MANAGETACTICCOMMAND_H

#include "cli/ICommand.h"
#include "cli/CommandManager.h"
#include "AppContext.h"
#include "EditTacticCommand.h"
#include "command/ExitCommand.h"
#include "CreateTacticCommand.h"

class ManageTacticCommand : public ICommand{
    CommandManager* tacticsCommandsManager;
public:
    void handle(AppContext *context, std::vector<std::string> args) {
        while (context->isRunning()) {
            std::cout << *(this->tacticsCommandsManager);
            std::string command;
            std::cin >> command;
            this->tacticsCommandsManager->handle(context, command);
        }
        context->run();
    }

    ManageTacticCommand(){
        this->tacticsCommandsManager = new CommandManager();
        this->tacticsCommandsManager->addCommand(new CreateTacticCommand());
        this->tacticsCommandsManager->addCommand(new EditTacticCommand());
        this->tacticsCommandsManager->addCommand(new ExitCommand());
    }

    std::string getName() override {
        return "manageTactics";
    }

    std::string getAliases() override {
        return "manage tactics";
    }

};


#endif //COURSEWORK2022_MANAGETACTICCOMMAND_H
