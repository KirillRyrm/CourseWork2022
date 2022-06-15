#ifndef COURSEWORK2022_ADDPLAYERSCOMMAND_H
#define COURSEWORK2022_ADDPLAYERSCOMMAND_H


#include "cli/ICommand.h"
#include "AppContext.h"

class AddPlayersCommand : public ICommand{
public:
    void handle(AppContext *context, std::vector<std::string> args) {
        context->getTeamController()->print();
        Team* team = context->getTeamController()->selectTeam();
        context->getPlayerController()->print();
        std::vector<Player*> players = context->getPlayerController()->selectPlayers();
        for (const auto &player: players){
            context->getTeamController()->addPlayer(team, player);
        }
    }

    std::string getName() override {
        return "addPlayers";
    }

    std::string getAliases() override {
        return "add players to team";
    }
};


#endif //COURSEWORK2022_ADDPLAYERSCOMMAND_H
