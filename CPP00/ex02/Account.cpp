#include <iostream>
#include <ctime>
#include <iomanip>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit){
    _accountIndex = _nbAccounts;
    this->_amount += initial_deposit;
    _nbAccounts++;
    _totalAmount += Account::checkAmount();
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << Account::checkAmount() << ";";
    std::cout << "created" << std::endl;
}

Account::~Account(void){
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" <<  Account::checkAmount() << ";";
    std::cout << "closed" << std::endl;
    _nbAccounts--;
    _totalAmount -= Account::checkAmount();
}

int	Account::getNbAccounts(void){
    return (_nbAccounts);
}

int	Account::getTotalAmount(void){
    return (_totalAmount);
}

int	Account::getNbDeposits(void){
    return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void){
    return (_totalNbWithdrawals);
}

void	Account::_displayTimestamp(void){
    time_t  timer;

    time(&timer);
    
    std::cout << std::setfill('0') <<  "["
               << std::setw(2) << (localtime(&timer)->tm_year + 1900)
                << std::setw(2) << localtime(&timer)->tm_mon + 1
                << std::setw(2) << localtime(&timer)->tm_mday
                << "_"
                << std::setw(2) << localtime(&timer)->tm_hour
                << std::setw(2) << localtime(&timer)->tm_min
                << std::setw(2) << localtime(&timer)->tm_sec
                << "]";
}

void	Account::displayAccountsInfos(void){
    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::getNbAccounts() << ";";
    std::cout << "total:" << Account::getTotalAmount() << ";";
    std::cout << "deposits:" << Account::getNbDeposits() << ";";
    std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit(int deposit){
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << Account::checkAmount() << ";";
    std::cout << "deposit:" << deposit << ";";
    this->_amount += deposit;
    this->_nbDeposits += 1;
    _totalNbDeposits += 1;
    _totalAmount += deposit;
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal){
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << Account::checkAmount() << ";";
    if (Account::checkAmount() - withdrawal < 0){
        std::cout << "withdrawal:refused" << std::endl;
        return (false);
    }
    else {
        std::cout << "withdrawal:" << withdrawal << ";";
        this->_amount -= withdrawal;
        _totalAmount -= withdrawal;
        this->_nbWithdrawals += 1;
        std::cout << "amount:" << Account::checkAmount() << ";";
        std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl; 
    }
    return (true);
}

int		Account::checkAmount(void) const{
    return (this->_amount);
}

void	Account::displayStatus(void) const{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << Account::checkAmount() << ";";
    std::cout << "deposits:" << this->_nbDeposits << ";";
    std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}