/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua < suchua@student.42kl.edu.my>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 22:12:03 by suchua            #+#    #+#             */
/*   Updated: 2023/03/11 23:31:04 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <chrono>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	this->_amount = initial_deposit;
	this->_nbAccounts++;
	this->_accountIndex = this->_nbAccounts - 1;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created\n";
}

Account::~Account(void)
{
}

void	Account::displayAccountsInfos(void)
{
	if (_nbAccounts == 0)
		return ;
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposit:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals() << ";\n";
}

void	Account::makeDeposit(int deposit)
{
	this->_amount += deposit;
	this->_nbDeposits++;
	this->_totalNbDeposits++;
	this->_totalAmount += deposit;
}
// [19920104_091532] index:0;p_amount:47;withdrawal:refused

bool	Account::makeWithdrawal(int withdrawal)
{
	if (this->_amount < withdrawal)
	{
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";";
		std::cout << "amount:" << _amount << ";";
		std::cout << "deposit:" << _nbDeposits << ";";
		std::cout << "withdrawals:" << _nbWithdrawals << ";\n";
		return (false);
	}
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	this->_totalNbWithdrawals++;
	this->_totalAmount -= withdrawal;
	return (true);
}

int	Account::checkAmount(void) const
{
	return (this->_amount);
}

void	Account::displayStatus(void) const
{
	if (_nbAccounts == 0)
		return ;
	for (int i = 0; i < _nbAccounts; i++)
	{
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";";
		std::cout << "amount:" << _amount << ";";
		std::cout << "deposit:" << _nbDeposits << ";";
		std::cout << "withdrawals:" << _nbWithdrawals << ";\n";
	}
}

void	Account::_displayTimestamp(void)
{
	auto	now = std::chrono::system_clock::now();
	std::time_t	time;
	std::tm	tm;

	time = std::chrono::system_clock::to_time_t(now);
	tm = *std::localtime(&time);
	std::cout  << "[" << std::put_time(&tm, "%Y%m%d_%H%M%S") << "]";
}

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

Account::Account(void)
{
}