#ifndef COURSEWORK2022_PRINTTACTICCOMMAND_H
#define COURSEWORK2022_PRINTTACTICCOMMAND_H

#include "cli/ICommand.h"
#include "AppContext.h"

class PrintTacticCommand : public ICommand{
public:
    void handle(AppContext *context, std::vector<std::string> args) {
        context->getTacticController()->print();
    }

    std::string getName() override {
        return "print";
    }

    std::string getAliases() override {
        return "print tactics";
    }
};


#endif //COURSEWORK2022_PRINTTACTICCOMMAND_H
