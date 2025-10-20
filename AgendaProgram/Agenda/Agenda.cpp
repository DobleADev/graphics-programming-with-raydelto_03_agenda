#include "Agenda.h"

void Agenda::createContact(std::unique_ptr<Contact> contactToCreate)
{
    if (contactToCreate)
    {
        contacts.push_back(std::move(contactToCreate));
    }
}

Contact *Agenda::readContact(int index)
{
    return contacts.at(index).get();
}

void Agenda::updateContact(int index, const Contact &contactToUpdate)
{
    contacts.at(index)->name = contactToUpdate.name;
    contacts.at(index)->lastName = contactToUpdate.lastName;
    contacts.at(index)->email = contactToUpdate.email;
    contacts.at(index)->number = contactToUpdate.number;
}

void Agenda::deleteContact(int index)
{
    contacts.erase(contacts.begin() + index);
}

int Agenda::size()
{
    return contacts.size();
}