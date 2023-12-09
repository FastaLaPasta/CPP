#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include <iostream>
#include <iomanip>
#include <list>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <limits>
#include <ctime>

void   vectorRecursif(std::vector<int>& sequence);
void   listRecursif(std::list<int>& sequenceL);
void   printSequence(std::vector<int> sequence, std::string moment);
void   printExecutionclock(clock_t& start_v, clock_t& start_l, clock_t& end_v, clock_t& end_l, int size);

#endif