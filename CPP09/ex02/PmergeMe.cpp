#include "PmergeMe.hpp"

// std::list<int>  algoList()
// {

// }

std::vector<int>    vectorRecursif(std::vector<int>& sequence)
{
    std::vector<int> left;
    std::vector<int> right;
    if (sequence.size() > 2)
    {
        for (size_t i = 0; i < sequence.size(); i++)
        {
            if (i < sequence.size() / 2)
                left.push_back(sequence[i]);
            else
                right.push_back(sequence[i]);
        }
        vectorRecursif(left);
        vectorRecursif(right);
        sequence.clear();
        while (!left.empty() || !right.empty())
        {
            if (right.empty() || (!left.empty() && left[0] < right[0]))
            {
                sequence.push_back(left[0]);
                left.erase(left.begin());
            } 
            else
            {
                sequence.push_back(right[0]);
                right.erase(right.begin());
            }    
        }
    } 
    else
    {
        if (sequence[0] > sequence[1])
            std::iter_swap(sequence.begin(), sequence.begin() + 1);
    }
    return (sequence);
}