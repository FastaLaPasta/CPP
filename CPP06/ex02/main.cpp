#include "Base.hpp"

int main(void) {
    Base base;
    Base *X = base.generate();
    X->identify(*X);
    X->identify(X);
    return (0);
}