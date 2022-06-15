#include "MatchMenu.h"
#include "AppContext.h"
#include "cli/CommandManager.h"
#include "command/ExitCommand.h"
#include "command/player/ManagePlayerCommand.h"
#include "command/tactics/ManageTacticCommand.h"
#include "command/coach/ManageCoachCommand.h"
#include "command/team/ManageTeamCommand.h"
#include "command/MatchMakingCommand.h"


int main()
{
    AppContext* context = new AppContext();
    CommandManager manager;
    manager.addCommand(new ManagePlayerCommand());
    manager.addCommand(new ManageTacticCommand());
    manager.addCommand(new ManageCoachCommand());
    manager.addCommand(new ManageTeamCommand());
    manager.addCommand(new MatchMakingCommand());
    manager.addCommand(new ExitCommand());
    std::string input;
    while (context->isRunning()){
        std::cout<<manager;
        std::cin>>input;
        manager.handle(context, input);
    }
}