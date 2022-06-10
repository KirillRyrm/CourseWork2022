#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "Person.h"
#include "Position.h"


class Player : public Person
{
    public:
        Player(std::string first_name, std::string last_name, std::string middle_name, int age, double height, Position position, double transfer_price);
        std::string Info() const override;
        double GetTransferPrice() const { return transfer_price; }
        Position GetPosition() const { return position; }

        void ChangePosition(const Position &position);
        void ChangeTransferPrice(const double& transfer_price);

    private:
        Position position;
        double transfer_price;
};

#endif // PLAYER_H
