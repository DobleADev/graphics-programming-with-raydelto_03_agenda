#ifndef AGENDAPROGRAM_H
#define AGENDAPROGRAM_H
#include "Agenda/Agenda.h"
#include "Contact/Contact.h"
#include <iostream>
#include <string>
#include <vector>
#include <memory>

class AgendaProgram
{
    private:
    bool isRunning;
    Agenda agenda;
    void printMenu();
    void listContacts();
    void createContact();
    void modifyContact();
    void deleteContact();

    public:
    void run();
};

#endif