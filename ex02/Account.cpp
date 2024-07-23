/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 00:31:27 by gabriel           #+#    #+#             */
/*   Updated: 2024/07/24 01:10:01 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

Account::Account(void)
{
	this->_accountIndex = Account::getNbAccounts();
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_amount = 0;
	Account::_nbAccounts++;
}

Account::Account( int initial_deposit )
{
	this->_accountIndex = Account::getNbAccounts() + 1;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_amount = initial_deposit;
	Account::_nbAccounts++;

	Account::_totalNbDeposits += this->_nbDeposits;
	Account::_totalAmount = Account::_totalNbDeposits + Account::_totalNbWithdrawals;
}

Account::~Account(void)
{
	Account::_totalNbDeposits -= this->_nbDeposits;
	Account::_totalAmount -= this->_nbAccounts;
	Account::_totalNbWithdrawals = this->_nbWithdrawals;
}

void Account::_displayTimestamp( void )
{
	
}

int	Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	
}
	
void	Account::makeDeposit( int deposit )
{
	
}

bool	Account::makeWithdrawal( int withdrawal )
{

}

int		Account::checkAmount( void ) const
{

}

void	Account::displayStatus( void ) const
{

}

