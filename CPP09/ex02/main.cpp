#include "PmergeMe.hpp"

void    fillContainers(std::vector<int>& sequence, std::list<int>& sequenceL, char **argv)
{
    long long   check;

    for (int i = 1; argv[i]; i++)
    {
            check = std::atoi(argv[i]);
            if (check > std::numeric_limits<int>::max())
                throw(std::invalid_argument("To large number"));
            sequence.push_back(std::atoi(argv[i]));
    }
    for (int i = 1; argv[i]; i++)
    {
            check = std::atol(argv[i]);
            if (check > std::numeric_limits<int>::max())
                throw(std::invalid_argument("To large number"));
            sequenceL.push_back(std::atoi(argv[i]));
    }
}

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        std::cout << "Arguments missing (Min: 2)" << std::endl;
        return (1);
    }

    std::vector<int>    sequence;
    std::list<int>      sequenceL;
    clock_t              start_v, start_l, end_v, end_l;

    fillContainers(sequence, sequenceL, argv);
    printSequence(sequence, "Before: ");
    start_v = clock();
    vectorRecursif(sequence);
    end_v = clock();
    start_l = clock();
    listRecursif(sequenceL);
    end_l = clock();
    printSequence(sequence, "After: ");
    printExecutionclock(start_v, start_l, end_v, end_l, argc - 1);
    // if (std::is_sorted(sequence.begin(), sequence.end()) == true) {
    //     std::cout << "Sorted !!!!" << std::endl;
    // } else {
    //     std::cout << "Not Sorted....." << std::endl;
    // }
    return (0);
}