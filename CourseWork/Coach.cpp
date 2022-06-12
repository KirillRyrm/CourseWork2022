#include <iostream>
#include <stdexcept>
#include <vector>
#include <string>

#include "Coach.h"
#include "TacticalScheme.h"

using namespace std;


Coach::Coach(string& first_name, string& last_name, string& middle_name, int age, double height,
             int experience, vector<TacticalScheme*>& TacticalSchemes): Person(first_name, last_name, middle_name, age, height), experience(experience), TacticalSchemes(TacticalSchemes)
{
    if(experience < 0)
    {
        throw invalid_argument("Not enough coaching experience");
    }
}

