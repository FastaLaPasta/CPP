#include "Base.hpp"
#include <cstdlib>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::Base() {

}

Base::~Base() {

}

Base*   Base::generate(void) {
    std::srand (time(NULL));
    int random = (std::rand() % 3) + 1;

    if (random == 1) {
        A* a = new A();
        std::cout << "Type A create" << std::endl;
        return (dynamic_cast<Base*>(a));
    } else if (random == 2) {
        B* b = new B();
        std::cout << "Type B create" << std::endl;
        return (dynamic_cast<Base*>(b));
    } else if (random == 3) {
        C* c = new C();
        std::cout << "Type C create" << std::endl;
        return (dynamic_cast<Base*>(c));
    }
    return (NULL);
}

void    Base::identify(Base* p) {
    A*  derivedA;
    B*  derivedB;
    C*  derivedC;

    derivedA = dynamic_cast<A*>(p);
    if (derivedA != 0) std::cout << "Type A found" << std::endl;
    derivedB = dynamic_cast<B*>(p);
    if (derivedB != 0) std::cout << "Type B found" << std::endl;
    derivedC = dynamic_cast<C*>(p);
    if (derivedC != 0) std::cout << "Type C found" << std::endl;
}

void    Base::identify(Base& p) {
try {
    A&  derivedA = dynamic_cast<A&>(p);
    std::cout << "Type A found" << std::endl;
    return ;
    } catch(const std::exception& e) {
        try {
            B&  derivedA = dynamic_cast<B&>(p);
            std::cout << "Type B found" << std::endl;
            return ;
        } catch(const std::exception& e) {
        try {
            C&  derivedC = dynamic_cast<C&>(p);
            std::cout << "Type C found" << std::endl;
            return ;
            } catch(const std::exception& e) {
                std::cerr << e.what() << '\n';
            }
        }
    }
}