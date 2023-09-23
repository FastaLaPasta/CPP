#include <iostream>

int main(void){
    std::string     hi = "HI THIS IS BRAIN";
    std::string     *stringPTR = &hi;
    std::string&    stringREF = hi;

    std::cout << &hi << std::endl;
    std::cout << "adresse du pointeur " << &stringPTR << std::endl;
    std::cout << "adresse de la variable pointer " << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;

    std::cout << hi << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
}