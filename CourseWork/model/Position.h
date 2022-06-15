#ifndef POSITION_H
#define POSITION_H


#include <map>

enum class Position
{
    goalkeeper,
    defender,
    midfielder,
    striker,
    positionSize

};


inline std::ostream& operator<<(std::ostream& out, const Position value){
    static std::map<Position, std::string> strings;
    if (strings.empty()){
    #define INSERT_ELEMENT(p) strings[p] = #p
            INSERT_ELEMENT(Position::goalkeeper);
            INSERT_ELEMENT(Position::defender);
            INSERT_ELEMENT(Position::midfielder);
            INSERT_ELEMENT(Position::striker);
    #undef INSERT_ELEMENT
    }
    return out << strings[value];
}

inline std::string to_string(const Position value){
    static std::map<Position, std::string> strings;
    if (strings.empty()){
#define INSERT_ELEMENT(p) strings[p] = #p
        INSERT_ELEMENT(Position::goalkeeper);
        INSERT_ELEMENT(Position::defender);
        INSERT_ELEMENT(Position::midfielder);
        INSERT_ELEMENT(Position::striker);
#undef INSERT_ELEMENT
    }
    return strings[value];
}

inline int size(const Position position){
    static std::map<Position, std::string> strings;
    if (strings.empty()){
#define INSERT_ELEMENT(p) strings[p] = #p
        INSERT_ELEMENT(Position::goalkeeper);
        INSERT_ELEMENT(Position::defender);
        INSERT_ELEMENT(Position::midfielder);
        INSERT_ELEMENT(Position::striker);
#undef INSERT_ELEMENT
    }
    return strings[position].size();
}

#endif // POSITION_H
