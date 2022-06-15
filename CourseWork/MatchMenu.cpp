/*
#include "MatchMenu.h"
#include <cstdlib>

using namespace std;

void MatchMenu::Menu()
{
    int number, number1;
    string name;
    string country;
    string coach1;
    string coach2;
    vector<string> players_1 = {"Maguire", "Shaw", "Varan", "Telles", "Pogba", "Matic", "Fred", "De Gea", "Ronaldo", "Rashford", "Martial"};
    vector<string> players_2 = {"Skriniar", "Bastoni", "De Vrij", "Darmian", "Barella", "Brozovic", "Chalhangolu", "Perisic", "Lukaku", "Martinez", "Handanovic"};
    Team *team1;
    Team *team2;
    TacticalScheme *tS1;
    TacticalScheme *tS2;
    Matchmaking match;

    do {
             cout << "|------------------------------------|\n"
					 "|           Matchmaking              |\n"
					 "|------------------------------------|\n"
					 "|1. Create the match                    |\n"
					 "|0. Exit                             |\n";
        cin >> number;
        try {
                switch(number) {
                case '1':
                    do {
                         cout << "|------------------------------------|\n"
                                "|1. Create the first team             |\n"
                                "|2. Create the second team             |\n";
                    cin >> number1;
                    switch(number1)
                    {
                    case '1':
                        cout << "Введите название команды: " << endl;
                        cin >> name;
                        cout << "Введите название страны: " << endl;
                        cin >> country;
                        cout << "Введите кол-во игроков: " << endl;
                        cin >> players_1;
                        cout << "Введите тренера: " << endl;
                        cin >> coach1;
                        cout << "Введите тактическую схему первой команды: " << endl;
                        //cin >> ...
                        //Подбор игроков...
                        team1 = new Team(name, country, players_1, coach1);
                        break;
                    case '2':
                        cout << "Введите название команды: " << endl;
                        cin >> name;
                        cout << "Введите название страны: " << endl;
                        cin >> country;
                        cout << "Введите кол-во игроков: " << endl;
                        cin >> players_2;
                        cout << "Введите тренера: " << endl;
                        cin >> coach2;
                        cout << "Введите тактическую схему первой команды: " << endl;
                        cin >> ...
                        // Подбор игроков
                        team2 = new Team2(name, country, players_2, coach2, ...)ж
                        break;
                    }

                    }
                    void CreateMatch(team1, team2);
                case '0':
				do {
					std::cout << "|------------------------------------|\n"
								 "|        Do you want to exit?        |\n"
								 "|------------------------------------|\n"
								 "|1. Yes                              |\n"
								 "|2. No                               |\n"
								 "|------------------------------------|\n";
					std::cin >> number1;
					switch (number1) {
					case '1':
						exit(0);
						break;
					case '2':
						std::cout << "|----------------------------------|\n"
									 "|         Going back               |\n"
									 "|----------------------------------|\n";
						break;

                }

        }
    }
}   while (number1 != '0');
default:
				std::cerr << "Oops!... You made a wrong choice!\n";

			}
		}
		catch (const std::exception& ex) { std::cerr << ex.what() << "\n"; }
    } while (number != 0);
*/
