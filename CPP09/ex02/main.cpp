#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    (void)argc;
    std::vector<int> sequence;
    std::vector<int> result;
    for (int i = 1; argv[i]; i++)
    {
            sequence.push_back(std::atoi(argv[i]));
    }
    result = vectorRecursif(sequence);
    // if (std::is_sorted(result.begin(), result.end()) == true) {
    //     std::cout << "Sorted !!!!" << std::endl;
    // } else {
    //     std::cout << "Not Sorted....." << std::endl;
    // }
    return (0);
}