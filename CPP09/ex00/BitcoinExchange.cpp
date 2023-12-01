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
                if (value >= 0 && value < std::numeric_limits<int>::max() && dateChecking(date) == 0) {
                    std::cout << date << " => " << value << " = " << dataBase[date] * value << std::endl;
                } else if (value < 0) {
                    std::cout << "Error: not a positive number." << std::endl;
                } else if (dateChecking(date) > 0) {
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

int dateChecking(const std::string& date) {
    std::istringstream ss(date);
    std::tm check = {};

    ss >> std::get_time(&check, "%Y-%m-%d");
    if (ss.fail()) {
        return (1);
    }

    std::time_t time = std::mktime(&check);
    if (time == -1) {
        return (2);
    }

    return (0);
}