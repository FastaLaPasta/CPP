#include "PmergeMe.hpp"

// std::list<int>  algoList()
// {

// }

std::vector<std::vector<int> > subDivide(std::vector<int> sequence)
{
    std::vector<std::vector<int> > divide;
    std::vector<int> subdivide;
    for (std::vector<int>::iterator it = sequence.begin(); it != sequence.end(); it++)
    {
        subdivide.push_back(*it);
        if (subdivide.size() == 2)
        {
            divide.push_back(subdivide);
            subdivide.clear();
        }
    }
    if (!subdivide.empty())
    {
        divide.push_back(subdivide);
    }
    return (divide);
    
}

std::vector<int>    algoVector(std::vector<int>& sequence)
{
    std::vector<std::vector<int> > divide = subDivide(sequence);
    std::vector<int> sort;
    size_t              x;
    for (size_t i = 0; i < divide.size(); i++)
    {
        if (divide[i][1] && (divide[i][0] > divide[i][1]))
            std::iter_swap(divide[i].begin(), divide[i].begin() + 1);
    }
    for (size_t i = 0; i < divide.size(); i ++)
    {
        for (size_t j = 0; j < divide[i].size(); j++)
        {
            x = 0;
            while (x < sort.size() && divide[i][j] > sort[x])
                x++;
            sort.insert(sort.begin() + x, divide[i][j]);
        }
    }
    return (sort);
}

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