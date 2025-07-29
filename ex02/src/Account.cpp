#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    _totalAmount += initial_deposit;
    _accountIndex = _nbAccounts++;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account(void)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

int	Account::getNbAccounts( void )
{
    return Account::_nbAccounts;
}
int	Account::getTotalAmount( void )
{
    return Account::_totalAmount;
}
int	Account::getNbDeposits( void )
{
    return Account::_totalNbDeposits;
}
int	Account::getNbWithdrawals( void )
{
    return Account::_totalNbWithdrawals;
}

void    Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" <<
    _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void    Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    if (deposit < 0)
    {
        std::cout << "index:" << _accountIndex << ";p_amount:" << _amount 
        << ";deposit:refused" << std::endl;
        return ;
    }
    std::cout << "index;" << _accountIndex << ";p_amount;" << _amount << ";deposit:" << deposit 
    << ";amount:" << (_amount + deposit) << ";nb_deposits:" << ++_nbDeposits << std::endl;
    _amount += deposit;
    _totalAmount += deposit;
    ++_totalNbDeposits;
}
bool    Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    if (withdrawal < 0 || withdrawal > _amount)
    {
        std::cout << "index:" << _accountIndex << ";p_amount:" << _amount 
        << ";withdrawal:refused" << std::endl;
        return false;
    }
    std::cout << "index;" << _accountIndex << ";p_amount;" << _amount << ";withdrawal:" << withdrawal 
    << ";amount:" << (_amount - withdrawal) << ";nb_withdrawals:" << ++_nbWithdrawals << std::endl;
    _amount -= withdrawal;
    _totalAmount -= withdrawal; 
    ++_totalNbWithdrawals;
    return true;
}
int     Account::checkAmount(void) const
{
    return _amount;
}

void    Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" <<
    _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void    Account::_displayTimestamp()
{
    time_t now = time(0);
    struct tm tstruct;
    char buf[20];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "[%Y%m%d_%H%M%S] ", &tstruct);
    std::cout << buf;
}