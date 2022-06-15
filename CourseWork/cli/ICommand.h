#ifndef ICOMMAND_H
#define ICOMMAND_H


#include <string>
#include <vector>

class ICommand {
public:
    virtual void handle(AppContext* context, std::vector<std::string> args) = 0;
    virtual std::string getName() = 0;
    virtual std::string getAliases(){return "";};
};


#endif //ICOMMAND_H
