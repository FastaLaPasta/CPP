#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP
#include <iostream>
#include <map>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <ctime>

std::map<std::string, double>   dataProcess();
void                            walletProcess(char  *wallet, std::map<std::string, double> dataBase);
int                             dateChecking(const std::string& date);


#endif