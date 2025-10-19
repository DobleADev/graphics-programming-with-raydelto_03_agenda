#include <iostream>
#include <string>
#include <vector>

class Contact
{
    public:
    
};

class Agenda
{
    private:
    

    public:
    Contact createContact();
    Contact editContact();
    Contact deleteContact();
    Contact listContacts();
};

class AgendaProgram
{
    private:
    bool isRunning;
    Agenda agenda;

    public:
    void run();
    void close();
};

int main()
{
    AgendaProgram newAgendaProgram;
    newAgendaProgram.run();
    return 0;
}