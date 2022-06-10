#include <stdexcept>
#include "TacticalScheme.h"

using namespace std;

TacticalScheme::TacticalScheme(int goalkeepers, int defenders, int midfielders, int strikers)
{
    if(goalkeepers < 0 || defenders < 0 || midfielders < 0 || strikers < 0)
    {
        throw invalid_argument("Wrong values");
    }
}

bool TacticalScheme::isPlayersEnough() const
{
    return (GetGoalkeepers() + GetDefenders() + GetMidfielders() + GetStrikers() = 11);
}
