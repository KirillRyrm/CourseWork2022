#ifndef COACH_H
#define COACH_H

#include <vector>

#include "Person.h"
#include "model/TacticalScheme.h"

class Coach : public Person
{
    public:
        Coach(std::string& first_name, std::string& last_name, std::string& middle_name, int age, double height, int experience, std::vector<TacticalScheme*>& TacticalSchemes);

        int GetExperience() const { return experience; }

        friend std::ostream& operator<<(std::ostream& os, const Coach& dt);

    const std::vector<TacticalScheme *> &getTacticalSchemes() const;

private:
        int experience;
        std::vector<TacticalScheme*> TacticalSchemes;


};

#endif // COACH_H
