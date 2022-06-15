#ifndef COURSEWORK2022_MANAGECOACHCOMMAND_H
#define COURSEWORK2022_MANAGECOACHCOMMAND_H
#include "cli/ICommand.h"
#include "AppContext.h"
#include "cli/CommandManager.h"
#include "command/ExitCommand.h"
#include "CreateCoachCommand.h"

class ManageCoachCommand  : public ICommand {
    CommandManager *CoachCommandsManager;
public:

    ManageCoachCommand() {
        this->CoachCommandsManager = new CommandManager();
        this->CoachCommandsManager->addCommand(new CreateCoachCommand());
        this->CoachCommandsManager->addCommand(new ExitCommand());
    }

    void handle(AppContext *context, std::vector<std::string> args) {
        while (context->isRunning()) {
            std::cout << *(this->CoachCommandsManager);
            std::string command;
            std::cin >> command;
            this->CoachCommandsManager->handle(context, command);
        }
        context->run();
    }

    std::string getName() override {
        return "manageCoaches";
    }

    std::string getAliases() override {
        return "manage all coaches";
    }

};
#endif //COURSEWORK2022_MANAGECOACHCOMMAND_H
