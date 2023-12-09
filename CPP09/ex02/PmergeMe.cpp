#include "PmergeMe.hpp"

void    listRecursif(std::list<int>& sequenceL)
{
    std::list<int>  left;
    std::list<int>  right;
    size_t          sequenceSize = sequenceL.size();
    int             tmp;

    if (sequenceSize > 2)
    {
        for (size_t i = 0; i < sequenceSize; i++)
        {
            if (i < sequenceSize / 2)
                left.push_back(sequenceL.front());
            else
                right.push_back(sequenceL.front());
            sequenceL.pop_front();
        }
        listRecursif(left);
        listRecursif(right);
        sequenceL.clear();
        while (!left.empty() || !right.empty())
        {
            if (right.empty() || (!left.empty() && left.front() < right.front()))
            {
                sequenceL.push_back(left.front());
                left.pop_front();
            }
            else
            {
                sequenceL.push_back(right.front());
                right.pop_front();
            }
        }
    }
    else
    {
        if (sequenceL.size() == 2){
            tmp = sequenceL.front();
            sequenceL.pop_front();
            if (tmp > sequenceL.front())
                sequenceL.push_back(tmp);
            else
                sequenceL.push_front(tmp); 
        }
    }
}

void    vectorRecursif(std::vector<int>& sequence)
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
        if (sequence.size() == 2 && (sequence[0] > sequence[1]))
            std::iter_swap(sequence.begin(), sequence.begin() + 1);
}

void    printSequence(std::vector<int> sequence, std::string moment)
{
    std::cout << moment;
    for (size_t i = 0; i < sequence.size() && i < 4; i++)
    {
        std::cout << sequence[i] << " ";
    }
    if (sequence.size() > 4)
        std::cout << "[...]";
    std::cout << std::endl;
}

void    printExecutionclock(clock_t& start_v, clock_t& start_l, clock_t& end_v, clock_t& end_l, int size)
{
    double  vectorDuration = static_cast<double>(end_v - start_v) / 1000;
    double  listDuration = static_cast<double>(end_l - start_l) / 1000;

    std::cout << "clock to process a range of " << size << " elements with std::vectorRecursif : " << std::fixed << std::setprecision(5) << vectorDuration << " us" << std::endl;
    std::cout << "clock to process a range of " << size << " elements with std::listRecursif : " << std::fixed << std::setprecision(5) << listDuration << " us" << std::endl;
}