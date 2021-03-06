#ifndef COMMANDMANAGER_H
#define COMMANDMANAGER_H


#include <memory>
#include "ICommand.h"
#include <iostream>

class CommandManager {
private:
    std::vector<ICommand*> commands;

    ICommand* getCommand(std::string command_name){
        for (auto &command: commands){
            if(command->getName() == command_name){
                return command;
            }
        }
        return nullptr;
    }
public:
    void addCommand(ICommand* command){
        commands.push_back(command);
    }
    void handle(AppContext* context, std::string input){
        getCommand(input)->handle(context, {input});
    }
    friend std::ostream& operator<<(std::ostream& os, const CommandManager& dt){
        for (const auto &command: dt.commands){
            os<<command->getName() << " - " << command->getAliases()<<"\n";
        }
        os<<">";
        return os;
    }
};

#endif //COMMANDMANAGER_H
