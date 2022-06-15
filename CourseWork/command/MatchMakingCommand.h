#ifndef COURSEWORK2022_MATCHMAKINGCOMMAND_H
#define COURSEWORK2022_MATCHMAKINGCOMMAND_H

#include <unistd.h>
#include <thread>
#include "cli/ICommand.h"
#include "AppContext.h"

class MatchMakingCommand : public ICommand{

public:

#define PBSTR "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"
#define PBWIDTH 60

    void printProgress(double percentage) {
        int val = (int) (percentage * 100);
        int lpad = (int) (percentage * PBWIDTH);
        int rpad = PBWIDTH - lpad;
        printf("\r%3d%% [%.*s%*s]", val, lpad, PBSTR, rpad, "");
        fflush(stdout);
    }

    void handle(AppContext *context, std::vector<std::string> args) {
        context->getTeamController()->print();
        Team* t1 = context->getTeamController()->selectTeam();
        Team* t2 = context->getTeamController()->selectTeam();
        if(t1 == t2){
            std::cout<<"can not create match between same command<<\n";
            return;
        }
        if(t1->getTrained().size()<11 || t2->getTrained().size()<11) {
            std::cout<<"one of the commands is incomplete\n";
            return;
        }

        std::cout<<(*t1);
        std::cout<<"vs\n";
        std::cout<<(*t2);
        std::cout<<"\n";

        for (int i = 0; i < 100; ++i) {
            printProgress(i/100.0);
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
        }

        std::cout<<((rand()%2)==0?(*t1):(*t2))<<" won\n";



    }

    std::string getName() override {
        return "matchMaking";
    }

    std::string getAliases() override {
        return "create match";
    }

};


#endif //COURSEWORK2022_MATCHMAKINGCOMMAND_H
