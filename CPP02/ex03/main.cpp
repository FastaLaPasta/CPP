#include "Point.hpp"

int main() {
    Point a(0.0f, 0.0f);
    Point b(2.0f, 0.0f);
    Point c(1.0f, 2.0f);
    Point point(10.0f, 1.0f);

    bool isInside = bsp(a, b, c, point);

    if (isInside) {
        std::cout << "Le point est à l'intérieur du triangle." << std::endl;
    } else {
        std::cout << "Le point est à l'extérieur du triangle." << std::endl;
    }

    return 0;
}