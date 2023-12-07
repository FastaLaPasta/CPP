#include "RPN.hpp"

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cout << "Wrong number of arguments" << std::endl;
        return (1);
    }
    try
    {
        std::stack<int> poland = RPN(argv[1]);
        std::cout << poland.top() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}