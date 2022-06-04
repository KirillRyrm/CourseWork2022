#ifndef PERSON_H
#define PERSON_H


class Person
{
    public:
        Person();

        unsigned int GetCounter() { return Counter; }

    protected:

    private:
        unsigned int Counter;
};

#endif // PERSON_H
