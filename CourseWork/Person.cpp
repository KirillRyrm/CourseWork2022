#include <stdexcept>
#include <string>
#include "Person.h"

using namespace std;

Person::Person(string first_name, string last_name, string middle_name, int age, double height): first_name(first_name), last_name(last_name), middle_name(middle_name), age(age), height(height)
{
    if(height <= 0)
    {
        throw invalid_argument("Incorrect height");
    }
    if(age <= 0)
    {
        throw invalid_argument("Incorrect age");
    }
    if(!isFullName(first_name, last_name, middle_name))
    {
        throw invalid_argument("Incorrect FIO");
    }
}
bool Person::isFullName(const string& first_name,
    const string& last_name,
    const string& middle_name
)
{
    return (
        !first_name.empty() &&
        !last_name.empty() &&
        !middle_name.empty()
    );
}
string Person::getFirstName() const {
    return first_name;
    }
string Person::getLastName() const {
    return last_name;
    }
string Person::getMiddleName() const {
    return middle_name;
    }
int Person::getAge() const {
    return age;
    }
double Person::getHeight() const {
    return height;
    }

string Person::Info() const
{
    return ("Фамилия: " + last_name + ";\n" + "Имя: " + first_name + ";\n" + "Отчество: " + middle_name + ";\n" + "Возраст: " + to_string(age) + ";\n" + "Рост: " + to_string(height) + ";\n");
}

void Person::ChangeAge(const int& age)
{
    this->age = age;
}
void Person::ChangeHeight(const double& height)
{
    this->height = height;
}
