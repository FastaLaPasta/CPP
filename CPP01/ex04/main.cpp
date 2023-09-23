#include "SedV2.hpp"

int main(int argc, char const **argv)
{
    if (argc != 4)
        return (std::cout << "Bad number of arguments : Needed 4" << std::endl, 1);
    SedV2   sed2(argv[1]);
    sed2.replace(argv[2], argv[3]);
    return 0;
}
