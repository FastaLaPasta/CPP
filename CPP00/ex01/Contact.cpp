#include "Contact.hpp"

void Contact::add_contact_info(int nbr) {
    std::string attribus;
    contact_nbr = nbr + 1;

    std::cout << "\x1b[34mEnter your number\x1b[0m: ";
    std::getline(std::cin, attribus);
    this->_number = attribus;
    std::cout << "\x1b[34mEnter your first name\x1b[0m: ";
    std::getline(std::cin, attribus);
    this->_first_name = attribus;
    std::cout << "\x1b[34mEnter your last name\x1b[0m: ";
    std::getline(std::cin, attribus);
    this->_last_name = attribus;
    std::cout << "\x1b[34mEnter your nickname\x1b[0m: ";
    std::getline(std::cin, attribus);
    this->_nickname = attribus;
    std::cout << "\x1b[34mEnter your darkest secret\x1b[0m: ";
    std::getline(std::cin, attribus);
    this->_darkest_s = attribus;
}

Contact::Contact(){
    std::cout << "Contact create" << std::endl;
}

Contact::~Contact(){
    
}

std::string Contact::getNumber( void ) const {
    return( this->_number );
}

std::string Contact::getFirstName( void ) const {
    return ( this->_first_name );
}

std::string Contact::getLastName( void ) const {
    return ( this->_last_name );
}

std::string Contact::getNickname( void ) const {
    return ( this->_nickname );
}

std::string Contact::getDarkest( void ) const {
    return ( this->_darkest_s );
}

int         Contact::getContactNumber( void ) const {
    return ( this->contact_nbr );
}