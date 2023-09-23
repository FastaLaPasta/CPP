#include <iostream>
#include "Harl.hpp"

int main(int argc, char const *argv[])
{
    (void)argv;
    if (argc != 2)
        return (std::cout << "\033[31mWrong Usage:\033[0m \033[33m./harl <setting>\033[0m" << std::endl, EXIT_FAILURE);
    Harl harl;
    harl.complain(argv[1]);
    return (EXIT_SUCCESS);
}
