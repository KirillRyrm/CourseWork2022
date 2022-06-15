#include <iostream>
#include <stdexcept>
#include <vector>
#include <string>
#include <iomanip>

#include "Coach.h"
#include "model/TacticalScheme.h"

using namespace std;


Coach::Coach(string& first_name, string& last_name, string& middle_name, int age, double height,
             int experience, vector<TacticalScheme*>& TacticalSchemes): Person(first_name, last_name, middle_name, age, height), experience(experience), TacticalSchemes(TacticalSchemes)
{
    if(experience < 0)
    {
        throw invalid_argument("Not enough coaching experience");
    }
}

std::ostream &operator<<(ostream &os, const Coach &dt) {
    int width = 40;
    os << std::left << std::string( width, '-' )<<"\n";
    os << std::left << std::setw(39) << ("| name: "    +  dt.getFirstName())                        << "|" << std::endl;
    os << std::left << std::setw(39) << ("| surname: " +  dt.getLastName())                         << "|" << std::endl;
    os << std::left << std::setw(39) << ("| age: "     +  std::to_string(dt.getAge()))          << "|" << std::endl;
    os << std::left << std::setw(39) << ("| height: "  +  std::to_string(dt.getHeight()))       << "|" << std::endl;
    os << std::left << std::setw(39) << ("| experience: "   +  std::to_string(dt.experience))   << "|" << std::endl;

    os<<std::string( width, '-' )<<"\n";;
    return os;
}

const vector<TacticalScheme *> &Coach::getTacticalSchemes() const {
    return TacticalSchemes;
}

