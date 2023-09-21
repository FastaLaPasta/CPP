#include "Contact.hpp"

void Contact::add_contact_info(int nbr) {
    std::string attribus;
    this->contact_nbr = nbr + 1;

    std::cout << "\x1b[34mEnter your number\x1b[0m: ";
    std::getline(std::cin, attribus);
    this->number = attribus;
    std::cout << "\x1b[34mEnter your first name\x1b[0m: ";
    std::getline(std::cin, attribus);
    this->first_name = attribus;
    std::cout << "\x1b[34mEnter your last name\x1b[0m: ";
    std::getline(std::cin, attribus);
    this->last_name = attribus;
    std::cout << "\x1b[34mEnter your nickname\x1b[0m: ";
    std::getline(std::cin, attribus);
    this->nickname = attribus;
    std::cout << "\x1b[34mEnter your darkest secret\x1b[0m: ";
    std::getline(std::cin, attribus);
    this->darkest_s = attribus;
}

Contact::Contact(){
    std::cout << "Contact create" << std::endl;
}

Contact::~Contact(){
    
}