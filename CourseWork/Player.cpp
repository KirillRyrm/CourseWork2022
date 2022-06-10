#include <stdexcept>
#include "Player.h"

using namespace std;

Player::Player(string first_name, string last_name, string middle_name, int age, double height, Position position, double transfer_price): Person(first_name, last_name, middle_name, age, height), position(position), transfer_price(transfer_price)
    {
        if(transfer_price <= 0)
        {
            throw invalid_argument("Wrong transfer price");
        }
    }
    string Player::Info() const
{
    string enumToString;
    switch(position)
    {
    case Position::goalkeeper:
        enumToString = "Воротар";
        break;
    case Position::defender:
        enumToString = "Захисник";
        break;
    case Position::midfielder:
        enumToString = "Півзахисник";
        break;
    case Position::striker:
        enumToString = "Нападник";
        break;
    }

    return (Person::Info() + "Позиція гравця: " + enumToString + ";\n" + "Трансферна вартість: " + to_string(transfer_price));
}

void Player::ChangePosition(const Position &position)
{
    this->position = position;
}

void Player::ChangeTransferPrice(const double& transfer_price)
{
    this->transfer_price = transfer_price;
}
