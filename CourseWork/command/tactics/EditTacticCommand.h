#ifndef COURSEWORK2022_EDITTACTICCOMMAND_H
#define COURSEWORK2022_EDITTACTICCOMMAND_H

#include "cli/ICommand.h"
#include "AppContext.h"

class EditTacticCommand : public ICommand{

public:
    void handle(AppContext *context, std::vector<std::string> args)  {

    }

    std::string getName() override {
        return "edit";
    }

    std::string getAliases() override {
        return "edit tactic scheme";
    }

};


#endif //COURSEWORK2022_EDITTACTICCOMMAND_H
