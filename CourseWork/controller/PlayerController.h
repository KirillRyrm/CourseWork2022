#ifndef COURSEWORK2022_PLAYERCONTROLLER_H
#define COURSEWORK2022_PLAYERCONTROLLER_H


#include <vector>
#include <iostream>
#include "model/person/Player.h"

class PlayerController {
std::vector<Player*> players;
public:
    void createPlayer(){
        std::string first_name;
        std::string last_name;
        std::string middle_name;
        int age;
        double height;
        int position;
        double transfer_price;

        std::cout<<"first name >";
        std::cin>>first_name;

        std::cout<<"last name >";
        std::cin>>last_name;

        std::cout<<"middle name >";
        std::cin>>middle_name;

        std::cout<<"age >";
        std::cin>>age;

        std::cout<<"height >";
        std::cin>>height;

        std::cout<<"transfer price >";
        std::cin>>transfer_price;

        std::cout<<"select position type:\n";
        for(int i = 0; i < (int)Position::positionSize; i++){
            std::cout<<"\t"<<(Position)i<<"\n";
        }
        std::cin>>position;

        Player *p = new Player(first_name, last_name, middle_name,
                               age, height, (Position) position, transfer_price);
        this->players.push_back(p);
    }
    void print(){
        for (int i = 0; i < this->players.size(); ++i) {
            std::cout<<"id: "<< i << "\n";
            std::cout<<(*players.at(i));
        }
    }

    std::vector<Player *> selectPlayers() {
            int id;
            std::vector<Player*> players;
            do{
                std::cout<<"id >";
                std::cin>>id;
                try {
                    players.push_back(this->players.at(id));
                }catch (std::exception e){
                    id=-1;
                }
            } while (id!=-1);
            return players;
    }

    void genRandom() {
        for (int i = 0; i < 5; ++i) {
            int size = players.size()/5;
            std::string n = std::string(1, 'a'+i);
            std::string first_name = n + std::to_string(size);
            std::string last_name =  n;
            std::string middle_name = n;
            int age = size+15;
            double height = size+100;
            double transfer_price = size+0.1;
            this->players.push_back(new Player(first_name, last_name, middle_name, age, height, Position::goalkeeper, transfer_price));
            this->players.push_back(new Player(first_name, last_name, middle_name, age, height, Position::defender, transfer_price));
            this->players.push_back(new Player(first_name, last_name, middle_name, age, height, Position::striker, transfer_price));
            this->players.push_back(new Player(first_name, last_name, middle_name, age, height, Position::midfielder, transfer_price));
        }
    }
};


#endif //COURSEWORK2022_PLAYERCONTROLLER_H
