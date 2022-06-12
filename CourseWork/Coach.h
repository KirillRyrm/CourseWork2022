#ifndef COACH_H
#define COACH_H

#include <vector>

#include "Person.h"
#include "TacticalScheme.h"

class Coach : public Person
{
    public:
        Coach(std::string first_name, std::string last_name, std::string middle_name, int age, double height, int experience, std::vector<TacticalScheme*>& TacticalSchemes);

        int GetExperience() const { return experience; }
        void AddTacticalScheme(TacticalScheme* tS, int n);
        std::string Info() const override;


    private:
        std::vector<TacticalScheme*> TacticalSchemes;
        int experience;

};

#endif // COACH_H
