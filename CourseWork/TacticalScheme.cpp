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
    return (GetGoalkeepers() + GetDefenders() + GetMidfielders() + GetStrikers() == 11);
}

void TacticalScheme::ListOfSchemes(int goalkeepers, int defenders, int midfielders, int strikers) const
{
    if((goalkeepers == 1 && defenders == 4 && midfielders == 3 && strikers == 3) || (goalkeepers == 1 && defenders == 4 && midfielders == 5 && strikers == 1))
    {
        cout << "Данная тактическая схема является сбалансированной" << endl;
    }
    else if(goalkeepers == 1 && defenders == 4 && midfielders == 5 && strikers == 1)
    {
        cout << ""
    }
}
