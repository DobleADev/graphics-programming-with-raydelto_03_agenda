#include <iostream>
#include <string>
#include <vector>
#include <memory>

class Contact
{
    public:
    std::string name;
    std::string lastName;
    std::string email;
    std::string number;
    // std::string ToString();

    std::string ToString()
    {
        return "[" + name + " " + lastName + "] " + email + " (" + number + ")";
    }
};

class Agenda
{
    private:
    std::vector<std::unique_ptr<Contact>> contacts;
    
    public:
    // void createContact(std::unique_ptr<Contact> contactToCreate);
    // Contact* readContact(int index);
    // void updateContact(int index, std::unique_ptr<Contact> contactToUpdate);
    // void deleteContact(int index);
    // int size();

    void createContact(std::unique_ptr<Contact> contactToCreate)
    {
        if (contactToCreate)
        {
            contacts.push_back(std::move(contactToCreate));
        }
    }

    Contact* readContact(int index)
    {
        return contacts.at(index).get();
    }

    void updateContact(int index, const Contact& contactToUpdate)
    {
        contacts.at(index)->name = contactToUpdate.name;
        contacts.at(index)->lastName = contactToUpdate.lastName;
        contacts.at(index)->email = contactToUpdate.email;
        contacts.at(index)->number = contactToUpdate.number;
    }

    void deleteContact(int index)
    {
        contacts.erase(contacts.begin() + index);
    }

    int size()
    {
        return contacts.size();
    }
};

class AgendaProgram
{
    private:
    bool isRunning;
    Agenda agenda;
    // void printMenu();
    // void listContacts();
    // void createContact();
    // void modifyContact();
    // void deleteContact();

    void printMenu()
    {
        std::cout << "\n--- My Agenda ---\n";
        std::cout << "1. List Contacts\n";
        std::cout << "2. Create Contact\n";
        std::cout << "3. Modify Contact\n";
        std::cout << "4. Delete Contact\n";
        std::cout << "9. Quit\n";
        std::cout << "------------------------\n";
        std::cout << "Type an option: ";
    }

    void listContacts()
    {
        int contactCount = agenda.size();
        if (contactCount == 0)
        {
            std::cout << "The list is empty." << std::endl;
            return;
        }
        std::cout << "--- Contact List ---" << std::endl;
        for (size_t i = 0; i < contactCount; i++)
        {
            std::cout << (i+1) << ". " << agenda.readContact(i)->ToString() << std::endl;
        }
        std::cout << "There's a total of " << contactCount << " contacts." << std::endl;
    }

    void createContact()
    {
        std::string contactName;
        std::cout << "Type the contact name: ";
        std::cin >> contactName;

        std::string contactLastName;
        std::cout << "Type the contact last name: ";
        std::cin >> contactLastName;

        std::string contactEmail;
        std::cout << "Type the contact email: ";
        std::cin >> contactEmail;

        std::string contactNumber;
        std::cout << "Type the contact number: ";
        std::cin >> contactNumber;
        
        std::unique_ptr<Contact> newContact = std::make_unique<Contact>();
        newContact.get()->name = contactName;
        newContact.get()->lastName = contactLastName;
        newContact.get()->email = contactEmail;
        newContact.get()->number = contactNumber;
        std::cout << "Contact " << newContact.get()->ToString() << " created successfully." << std::endl;
        agenda.createContact(std::move(newContact));
    }

    public:
    // void run();
    
    void run()
    {
        isRunning = true;
        while (isRunning)
        {
            printMenu();
            int option;
            std::cin >> option;
            std::cout << std::endl;
            switch (option)
            {
                case 1: listContacts(); break;
                case 2: createContact(); break;
                // case 3: modifyContact(); break;
                // case 4: deleteContact(); break;
                case 9: isRunning = false; break;
                default: break;
            }
        }
    }
};

int main()
{
    AgendaProgram newAgendaProgram;
    newAgendaProgram.run();
    system("pause");
    return 0;
}