#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>

class   Contact{
public:
    Contact();
    ~Contact();
    int         getContactNumber( void ) const;
    std::string getNumber( void ) const;
    std::string getFirstName( void ) const;
    std::string getLastName( void ) const;
    std::string getNickname( void ) const;
    std::string getDarkest( void ) const;
    void add_contact_info(int nbr);

private:
    int contact_nbr;
    std::string _number;
    std::string _first_name;
    std::string _last_name;
    std::string _nickname;
    std::string _darkest_s;
};

#endif