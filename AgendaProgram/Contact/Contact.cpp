#include "Contact.h"

std::string Contact::ToString()
{
    return "[" + name + " " + lastName + "] " + email + " (" + number + ")";
}