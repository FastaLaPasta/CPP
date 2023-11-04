#include "Array.hpp"

int main(void) {
    try {
        std::cout << "<---------------------Default constructor------------------->" << std::endl;
        Array<int> ok = Array<int>();
        std::cout << ok.size() << std::endl;
        Array<int> ko = Array<int>(5);
        std::cout << ko.size() << std::endl;
        
        std::cout << "<---------------------copy operator/constructor------------------->" << std::endl;

        Array<std::string> oh = Array<std::string>(8);
        Array<std::string> boo = Array<std::string>(1);
        std::cout << oh.size() << std::endl;
        Array<std::string> ho = oh;
        std::cout << ho.size() << std::endl;
        ho = boo;
        std::cout << ho.size() << std::endl;

        std::cout << "<---------------------[] operator overload------------------->" << std::endl;
        std::cout << ko[59];
        for (size_t i = 0; i < 15; i++) {
            std::cout << ko[i] << std::endl;
        }
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}