#include <stdexcept>
#include <iomanip>
#include "TacticalScheme.h"

using namespace std;

TacticalScheme::TacticalScheme(int defenders, int midfielders, int strikers, int goalkeepers): goalkeepers(goalkeepers), defenders(defenders), midfielders(midfielders), strikers(strikers)
{
    if(goalkeepers!=1 || defenders < 0 || midfielders < 0 || strikers < 0)
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
        return ("���������� ��������: " + to_string(goalkeepers) + ";\n" + "���������� ����������: " + to_string(defenders) + ";\n" + "���������� ��������������: " + to_string(midfielders) + ";\n" + "���������� ����������: " + to_string(strikers) + ";\n");
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

std::ostream &operator<<(ostream &os, const TacticalScheme &dt) {
    int width = 40;
    os << std::left << std::string( width, '-' )<<"\n";
    os << std::left << std::setw(39) << ("| goalkeepers: "    +  std::to_string(dt.goalkeepers))  << "|" << std::endl;
    os << std::left << std::setw(39) << ("| defenders: "      +  std::to_string(dt.defenders))    << "|" << std::endl;
    os << std::left << std::setw(39) << ("| midfielders: "    +  std::to_string(dt.midfielders))  << "|" << std::endl;
    os << std::left << std::setw(39) << ("| strikers: "       +  std::to_string(dt.strikers))     << "|" << std::endl;
    os<<std::string( width, '-' )<<"\n";;
    return os;
}
