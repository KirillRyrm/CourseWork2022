#include <stdexcept>
#include <string>
#include <utility>
#include <iomanip>
#include "Player.h"

using namespace std;

Player::Player(string& first_name, string& last_name, string& middle_name, int age, double height, Position position, double transfer_price):
Person(first_name, last_name, middle_name, age, height), position(position), transfer_price(transfer_price)
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
        enumToString = "Вратарь";
        break;
    case Position::defender:
        enumToString = "Защитник";
        break;
    case Position::midfielder:
        enumToString = "Полузащитник";
        break;
    case Position::striker:
        enumToString = "Нападающий";
        break;
    }

    return (Person::Info() + "Позиция игрока: " + enumToString + ";\n" + "Трансферная цена: " + to_string(transfer_price));
}

void Player::ChangePosition(const Position &position)
{
    this->position = position;
}

void Player::ChangeTransferPrice(const double& transfer_price)
{
    this->transfer_price = transfer_price;
}


std::ostream &operator<<(ostream &os, const Player &dt) {
    int width = 40;
    os << std::left << std::string( width, '-' )<<"\n";
    os << std::left << std::setw(39) << ("| name: "    +  dt.getFirstName())                        << "|" << std::endl;
    os << std::left << std::setw(39) << ("| surname: " +  dt.getLastName())                         << "|" << std::endl;
    os << std::left << std::setw(39) << ("| age: "     +  std::to_string(dt.getAge()))          << "|" << std::endl;
    os << std::left << std::setw(39) << ("| height: "  +  std::to_string(dt.getHeight()))       << "|" << std::endl;
    os << std::left << std::setw(39) << ("| price: "   +  std::to_string(dt.transfer_price))    << "|" << std::endl;
    os << std::left << std::setw(39) << ("| position: "+ to_string(dt.position))              << "|" << std::endl;
    os<<std::string( width, '-' )<<"\n";;
    return os;
}
