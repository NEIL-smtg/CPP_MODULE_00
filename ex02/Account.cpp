/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 00:09:36 by suchua            #+#    #+#             */
/*   Updated: 2023/04/04 02:22:29 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <string>
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(void)
{
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
}

void	print_format(std::string s, int nb, int semicolon)
{
	std::cout << s << nb;
	if (semicolon)
		std::cout << ";";
}

Account::Account(int initial_deposit)
{
	_amount += initial_deposit;
	_totalAmount += initial_deposit;
	++_nbAccounts;
	_accountIndex = _nbAccounts - 1;
	_displayTimestamp();
	print_format("index:", _accountIndex, 1);
	print_format("amount:", _amount, 1);
	std::cout << "created" <<std::endl;
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	print_format("index:", _accountIndex, 1);
	print_format("amount:", _amount, 1);
	print_format("deposit:", _nbDeposits, 1);
	print_format("withdrawals:", _nbWithdrawals, 0);
	std::cout << std::endl;
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	print_format("accounts:", _nbAccounts, 1);
	print_format("total:", _totalAmount, 1);
	print_format("deposits:", _totalNbDeposits, 1);
	print_format("withdrawals:", _totalNbWithdrawals, 0);
	std::cout << std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	print_format("index:", _accountIndex, 1);
	print_format("amount:", _amount, 1);
	std::cout << "closed" <<std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	print_format("index:", _accountIndex, 1);
	print_format("p_amount:", _amount, 1);
	print_format("deposit:", deposit, 1);
	_amount += deposit;
	_totalAmount += deposit;
	++_nbDeposits;
	++_totalNbDeposits;
	print_format("amount:", _amount, 1);
	print_format("nb_deposits:", _nbDeposits, 0);
	std::cout << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	if (_amount < withdrawal)
	{
		print_format("index:", _accountIndex, 1);
		print_format("p_amount:", _amount, 1);
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	print_format("index:", _accountIndex, 1);
	print_format("p_amount:", _amount, 1);
	print_format("withdrawal:", withdrawal, 1);
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	++_nbWithdrawals;
	++_totalNbWithdrawals;
	print_format("amount:", _amount, 1);
	print_format("nb_withdrawal:", _nbWithdrawals, 0);
	std::cout << std::endl;
	return (true);
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

int	Account::checkAmount(void) const
{
	return (_amount);
}

void	Account::_displayTimestamp(void)
{
	char	buffer[80];
	std::time_t	t;

	t = std::time(NULL);
	std::strftime(buffer, 80, "[%Y%m%d_%H%M%S]", std::localtime(&t));
	std::cout << buffer << " ";
}
