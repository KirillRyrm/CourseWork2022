#ifndef COURSEWORK2022_APPCONTEXT_H
#define COURSEWORK2022_APPCONTEXT_H


#include "controller/PlayerController.h"
#include "controller/TacticController.h"
#include "controller/CoachController.h"
#include "controller/TeamController.h"

class AppContext {
private:
    PlayerController* playerController;
    TacticController* tacticController;
    CoachController * coachController;
    TeamController  * teamController;
public:
    void run(){
        this->work = true;
    }

    void stop(){
        this->work = false;
    }
    bool isRunning() const {
        return this->work;
    }

    PlayerController *getPlayerController() const {
        return playerController;
    }

    AppContext() {
        this->playerController = new PlayerController();
        this->tacticController = new TacticController();
        this->coachController = new CoachController();
        this->teamController = new TeamController();
    }

    TacticController *getTacticController() const {
        return tacticController;
    }

    CoachController *getCoachController() const {
        return coachController;
    }

    TeamController *getTeamController() const {
        return teamController;
    }

private:
    bool work = true;
};


#endif //COURSEWORK2022_APPCONTEXT_H
