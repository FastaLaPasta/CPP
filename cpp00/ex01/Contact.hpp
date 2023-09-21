#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>

class   Contact{
    public:

    // Attributs
    int contact_nbr;
    std::string number;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string darkest_s;

    // Méthodes
    void add_contact_info(int nbr);

    //Constructeur\Destructeur
    Contact();
    ~Contact();
};

#endif