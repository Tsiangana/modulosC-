/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:00:41 by pzau              #+#    #+#             */
/*   Updated: 2025/04/15 14:00:42 by pzau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <iomanip>
#include <iostream>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void    Account:: _displayTimestamp(void)
{
    std::time_t now = std::time(0);
    std::tm *ltm = std::localtime(&now);

    std::cout << "["
              << std::setfill('0') << std::setw(4) << (1900 + ltm->tm_year)
              << std::setw(2) << (1 + ltm->tm_mon)
              << std::setw(2) << ltm->tm_mday << "_"
              << std::setw(2) << ltm->tm_hour
              << std::setw(2) << ltm->tm_min
              << std::setw(2) << ltm->tm_sec
              << "] ";
}

Account::Account(int initial_deposit)
{
    this->_accountIndex = _nbAccounts;
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;

    _nbAccounts++;
    _totalAmount += initial_deposit;

    _displayTimestamp();

    std::cout << "index:" << this->_accountIndex 
              << ";amount:" << this->_amount
              << ";created" << std::endl; 
}

Account::~Account()
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex 
              << ";amount:" << this->_amount
              << ";closed" << std::endl; 
}

void    Account::makeDeposit( int deposit )
{
    _displayTimestamp();

    std::cout << "index:" << this->_accountIndex
              << ";p_amount:" << this->_amount;

    this->_amount += deposit;
    this->_nbDeposits++;

    _totalAmount += deposit;
    _totalNbDeposits++;

    std::cout << ";deposit:" << deposit
              << ";amount:" << this->_amount
              << ";nb_deposits:" << this->_nbDeposits
              << std::endl;
}

bool    Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();

    std::cout << "index:" << this->_accountIndex
              << ";p_amount:" << this->_amount;

    if (withdrawal > this->_amount)
    {
        std::cout << ";withdrawal:refused" << std::endl;
        return (false);
    }

    this->_amount -= withdrawal;
    this->_nbWithdrawals++;

    _totalAmount -= withdrawal;
    _totalNbWithdrawals++;

    std::cout << ";withdrawal:" << withdrawal
              << ";amount:" << this->_amount
              << ";nb_withdrawals:" << this->_nbWithdrawals
              << std::endl;

    return (true);
}

void    Account::displayStatus() const
{
    _displayTimestamp();

    std::cout << "index:" << this->_accountIndex
              << ";amount:" << this->_amount
              << ";deposits:" << this->_nbDeposits
              << ";withdrawals:" << this->_nbWithdrawals
              << std::endl;
}

void    Account::displayAccountsInfos(void)
{
    _displayTimestamp();

    std::cout << "accounts:" << _nbAccounts
              << ";total:" << _totalAmount
              << ";deposits:" << _totalNbDeposits
              << ";withdrawals:" << _totalNbWithdrawals
              << std::endl;
}
