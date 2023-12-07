#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP
#include <iostream>
#include <iomanip>
#include <limits>
#include <map>
#include <fstream>
#include <sstream>
#include <algorithm>

std::map<std::string, double>   dataProcess();
void                            walletProcess(char  *wallet, std::map<std::string, double> dataBase);
bool                            isValidDate(const std::string& dateString);


#endif