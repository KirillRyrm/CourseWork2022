#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person
{
protected:

public:
     Person(std::string& first_name, std::string& last_name, std::string& middle_name, int age, double height);
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getMiddleName() const;
    int getAge() const;
    double getHeight() const;

    void ChangeHeight(const double& height);
    void ChangeAge(const int& age);
    bool isFullName(
        const std::string& first_name,
        const std::string& last_name,
        const std::string& middle_name
        );

    virtual std::string Info() const;
    virtual ~Person() = default;

protected:
        std::string first_name;
        std::string last_name;
        std::string middle_name;
        int age;
        double height;
};

#endif // PERSON_H
