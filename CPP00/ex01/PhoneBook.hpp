#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include <iomanip>
#include <string>
#include "Contact.hpp"

class PhoneBook{
public:

    

    //Methodes
    void add_contact(int nbr);
    void search();
    std::string adjust(std::string atribus);

    //Constructeur\destructeur
    PhoneBook();
    ~PhoneBook();

private:
    //Atribus
    Contact contacts[8];
    int     nbr_of_contacts;
};

#endif