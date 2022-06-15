#ifndef COURSEWORK2022_MANAGETEAMCOMMAND_H
#define COURSEWORK2022_MANAGETEAMCOMMAND_H

#include "cli/ICommand.h"
#include "cli/CommandManager.h"
#include "AppContext.h"
#include "command/tactics/EditTacticCommand.h"
#include "CreateTeamCommand.h"
#include "command/ExitCommand.h"
#include "PrintTeamCommand.h"
#include "SelectCoachCommand.h"
#include "AddPlayersCommand.h"
#include "PrintTrained.h"
#include "TrainPlayersCommand.h"

class ManageTeamCommand : public ICommand{
    CommandManager* teamCommandsManager;
public:
    void handle(AppContext *context, std::vector<std::string> args) {
        while (context->isRunning()) {
            std::cout << *(this->teamCommandsManager);
            std::string command;
            std::cin >> command;
            this->teamCommandsManager->handle(context, command);
        }
        context->run();
    }

    ManageTeamCommand(){
        this->teamCommandsManager = new CommandManager();
        this->teamCommandsManager->addCommand(new CreateTeamCommand());
        this->teamCommandsManager->addCommand(new PrintTeamCommand());
        this->teamCommandsManager->addCommand(new SelectCoachCommand());
        this->teamCommandsManager->addCommand(new AddPlayersCommand());
        this->teamCommandsManager->addCommand(new TrainPlayersCommand());
        this->teamCommandsManager->addCommand(new PrintTrained());
        this->teamCommandsManager->addCommand(new ExitCommand());
    }

    std::string getName() override {
        return "manageTeams";
    }

    std::string getAliases() override {
        return "manage teams";
    }
};


#endif //COURSEWORK2022_MANAGETEAMCOMMAND_H
