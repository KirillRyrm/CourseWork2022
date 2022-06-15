#ifndef COURSEWORK2022_GENRANDOMCOMMAND_H
#define COURSEWORK2022_GENRANDOMCOMMAND_H

#include "cli/ICommand.h"
#include "AppContext.h"

class GenRandomCommand : public ICommand{
public:
    void handle(AppContext *context, std::vector<std::string> args) {
        context->getPlayerController()->genRandom();
    }

    std::string getName() override {
        return "random";
    }

    std::string getAliases() override {
        return "generate random players";
    }

};


#endif //COURSEWORK2022_GENRANDOMCOMMAND_H
