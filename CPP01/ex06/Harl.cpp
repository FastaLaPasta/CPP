#include "Harl.hpp"

Harl::Harl() {

}

Harl::~Harl() {

}

void    Harl::debug() {
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl
            << "I really do !" << std::endl;
    std::cout << std::endl;
}

void    Harl::info() {
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money." << std::endl
            << "You didn’t put enough bacon in my burger !" << std::endl
            << "If you did, I wouldn’t be asking for more !" << std::endl;
    std::cout << std::endl;
}

void    Harl::warning() {
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl
            << "I’ve been coming for years whereas you started working here since last month." << std::endl;
    std::cout << std::endl;
}

void    Harl::error() {
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable !" << std::endl 
            << "I want to speak to the manager now." << std::endl;
    std::cout << std::endl;
}

void    Harl::complain(std::string level) {
    std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    int i = 0;
    while (i < 4 && levels[i].compare(level))
        i++;
    switch (i) {
        case 0:
            this->debug();
        case 1:
            this->info();
        case 2:
            this->warning();
        case 3:
            this->error();
            break;
        default:
            std::cout << "\033[31mError: Arguments required :\033[0m \033[33m'DEBUG','INFO','WARNING' or 'ERROR'\033[0m" << std::endl;
    }
}
