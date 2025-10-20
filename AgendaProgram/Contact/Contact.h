#ifndef CONTACT_H
#define CONTACT_H
#include <string>

class Contact
{
    public:
    std::string name;
    std::string lastName;
    std::string email;
    std::string number;
    std::string ToString();
};

#endif