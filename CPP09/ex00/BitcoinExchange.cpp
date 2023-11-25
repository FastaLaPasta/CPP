#include "BitcoinExchange.hpp"

std::map<std::string, double>   dataProcess() {
    std::string date;
    double      value;

    std::ifstream dataBase ("data.csv", std::ifstream::in);
    std::map<std::string, double> dataExtract;

    std::getline(dataBase, date);
    while (std::getline(dataBase, date, ',')) {
        dataBase >> value;
        dataExtract[date] = value;
    }
    return (dataExtract);
}

void    walletProcess(char  *walletFile, std::map<std::string, double> dataBase) {
    std::string     buffer;
    std::string     date;
    double          value;
    (void)          dataBase;

    std::ifstream wallet(walletFile, std::ifstream::in);
    
    while (std::getline(wallet, buffer)) {
        buffer.erase(std::remove_if(buffer.begin(), buffer.end(), ::isspace), buffer.end());
        if (!buffer.empty()) {
            std::istringstream valueStream(buffer);
            std::getline(valueStream, date, '|');
            if (valueStream >> value) {
                std::cout << "date : " << date << " value : " << value << std::endl;
                std::cout << dataBase[date] << std::endl;
            } else {
                std::cout << "Error: bad input: " <<  buffer << std::endl;
            }
        }
    }
}