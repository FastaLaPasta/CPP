#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(void)
{
    int i = 0;
    PhoneBook A;
    std::string oui;
    std::cout << "\x1b[33menter ADD, SEARCH or EXIT\x1b[0m : ";
    while (std::getline(std::cin, oui)){
        if (i == 8)
            i = 0;
        if (oui == "ADD")
            A.add_contact(i++);
        else if (oui == "SEARCH")
            A.search();
        else if (oui == "EXIT")
            return (0);
        else
            std::cout << "\x1b[33menter ADD, SEARCH or EXIT\x1b[0m : ";
    }
    return 0;
}
