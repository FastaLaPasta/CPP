#include "BitcoinExchange.hpp"

std::map<std::string, double>   dataProcess() {
    std::string date;
    std::string buffer;
    double      value;

    std::ifstream dataBase ("data.csv", std::ifstream::in);
    std::map<std::string, double> dataExtract;

    std::getline(dataBase, date);
    while (std::getline(dataBase, date, ',')) {
        std::getline(dataBase, buffer);
        std::istringstream valueStream(buffer);
        valueStream >> value;
        dataExtract[date] = value;
    }
    return (dataExtract);
}

void    walletProcess(char  *walletFile, std::map<std::string, double> dataBase) {
    std::map<std::string, double>::iterator itLow;
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
                if (value >= 0 && value < std::numeric_limits<int>::max() && isValidDate(date) == 1) {
                    if (dataBase[date]) {
                        std::cout << date << " => " << value << " = " << dataBase[date] * value << std::endl;
                    } else {
                        itLow = dataBase.lower_bound(date);
                        itLow--;
                        if (itLow != dataBase.end())
                            std::cout << date << " => " << value << " = " << itLow->second << std::endl;
                        else
                           std::cout << "Error: bad input: not in dataBase" << std::endl; 
                    }
                } else if (value < 0) {
                    std::cout << "Error: not a positive number." << std::endl;
                } else if (isValidDate(date) == 0) {
                    std::cout << "Error: bad input => " << date << std::endl;
                } else {
                    std::cout << "Error: too large a number." << std::endl;
                }
            } else {
                std::cout << "Error: bad input: " <<  buffer << std::endl;
            }
        }
    }
}

bool isValidDate(const std::string& dateString) {
    std::istringstream ss(dateString);

    int year, month, day;
    char dash1, dash2;

    ss >> year >> dash1 >> month >> dash2 >> day;
    if (ss.fail() || dash1 != '-' || dash2 != '-') {
        return false;
    }
    if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31) {
        return (false);
    }
    return (true);
}