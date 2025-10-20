#ifndef AGENDA_H
#define AGENDA_H
#include "../Contact/Contact.h"
#include <vector>
#include <memory>

class Agenda
{
    private:
    std::vector<std::unique_ptr<Contact>> contacts;
    
    public:
    void createContact(std::unique_ptr<Contact> contactToCreate);
    Contact* readContact(int index);
    void updateContact(int index, const Contact &contactToUpdate);
    void deleteContact(int index);
    int size();
};

#endif