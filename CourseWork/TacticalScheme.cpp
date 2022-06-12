#include <stdexcept>
#include "TacticalScheme.h"

using namespace std;

TacticalScheme::TacticalScheme(int goalkeepers, int defenders, int midfielders, int strikers): goalkeepers(goalkeepers), defenders(defenders), midfielders(midfielders), strikers(strikers)
{
    if((goalkeepers < 0 || goalkeepers > 1) || defenders < 0 || midfielders < 0 || strikers < 0)
    {
        throw invalid_argument("Wrong values");
    }
}

bool TacticalScheme::isPlayersEnough() const
{
    return (GetGoalkeepers() + GetDefenders() + GetMidfielders() + GetStrikers() == 11);
}

    string TacticalScheme::GetTacticalSchemeInfo() const
    {
        return ("Количество вратарей: " + to_string(goalkeepers) + ";\n" + "Количество защитников: " + to_string(defenders) + ";\n" + "Количество полузащитников: " + to_string(midfielders) + ";\n" + "Количество нападающих: " + to_string(strikers) + ";\n");
    }

 void TacticalScheme::SetGoalkeepers(const int& goalkeepers)
 {
     this->goalkeepers = goalkeepers;
 }

void TacticalScheme::SetDefenders(const int& defenders)
 {
     this->defenders = defenders;
 }

 void TacticalScheme::SetMidfielders(const int& midfielders)
 {
     this->goalkeepers = goalkeepers;
 }

 void TacticalScheme::SetStrikers(const int& strikers)
 {
     this->strikers = strikers;
 }
