#include "BitcoinExchange.hpp"

int main(int argc, char **argv) {
    if (argc == 2) {
        std::map<std::string, double> bitcoinCourt = dataProcess();
        walletProcess(argv[1], bitcoinCourt);
    }
    return (0);
}