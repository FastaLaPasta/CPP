#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
    std::cout << "PhoneBook create" << std::endl;
    this->nbr_of_contacts = 0;
}

PhoneBook::~PhoneBook(){

}

void PhoneBook::add_contact(int nbr){
    PhoneBook::contacts[nbr].add_contact_info(nbr);
    if (PhoneBook::nbr_of_contacts < 8)
        PhoneBook::nbr_of_contacts++;
}

void    PhoneBook::search(){
    std::string nbr;

    if (PhoneBook::nbr_of_contacts == 0){
        std::cout << "NO FRIENDS" << std::endl;
    }
    for (int i = 0; i < PhoneBook::nbr_of_contacts; i++)
    {
        std::cout << std::setfill(' ') << std::setw(10);
        std::cout << PhoneBook::contacts[i].contact_nbr;
        std::cout << "|";
        std::cout << std::setfill(' ') << std::setw(10);
        std::cout << PhoneBook::adjust(PhoneBook::contacts[i].first_name);
        std::cout << "|";
        std::cout << std::setfill(' ') << std::setw(10);
        std::cout << PhoneBook::adjust(PhoneBook::contacts[i].last_name);
        std::cout << "|";
        std::cout << std::setfill(' ') << std::setw(10);
        std::cout << PhoneBook::adjust(PhoneBook::contacts[i].nickname);
        std::cout << std::endl;
        
    }
    int num;
    std::cout << "\x1b[32mContact num\x1b[0m: "; std::cin >> num;
    num--;
    if (num >= 0 && num <= 7 && PhoneBook::contacts[num].first_name.size() > 0){
        std::cout << "\x1b[32mNumber\x1b[0m: " << PhoneBook::contacts[num].number << std::endl;
        std::cout << "\x1b[32mFirst Name\x1b[0m: " << PhoneBook::contacts[num].first_name << std::endl;
        std::cout << "\x1b[32mLast Name\x1b[0m: " << PhoneBook::contacts[num].last_name << std::endl;
        std::cout << "\x1b[32mNickname\x1b[0m: " << PhoneBook::contacts[num].nickname << std::endl;
        std::cout << "\x1b[32mDarkest Secret\x1b[0m: " << PhoneBook::contacts[num].darkest_s << std::endl;  
    }
    else {
        std::cout << "\x1b[31m";
        std::cout << "Prend un chiffre coherent" << std::endl;
        std::cout << "\x1b[0m";
    }
    std::cin.clear();
}

std::string    PhoneBook::adjust(std::string atribus){
    std::string tmp = atribus;

    if (atribus.size() >= 10){
        while (tmp.size() >= 10)
            tmp.erase(tmp.begin() + 9, tmp.end());
        tmp.push_back('.');
    }
    return (tmp);
}
