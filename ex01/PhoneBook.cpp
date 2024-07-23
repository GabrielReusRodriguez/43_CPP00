/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 12:17:45 by greus-ro          #+#    #+#             */
/*   Updated: 2024/07/24 00:06:32 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

#include "PhoneBook.hpp"

/*
	iomanip is necessary for the std:.setw(n).
*/

PhoneBook::PhoneBook(void)
{
	this->total = 0;
}

PhoneBook::~PhoneBook(void)
{

}

void PhoneBook::add(void)
{
	size_t  	index;
	std::string first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;
	Contact		contact;
	
	std::cout << "\tEnter the first name: ";
	std::getline(std::cin, first_name);
	if (first_name.empty())
	{
		std::cout << "\tA saved contact cannot have empty fields." << std::endl;
		return ;
	}
	std::cout << "\tEnter the last name: ";
	std::getline(std::cin, last_name);
	if (last_name.empty())
	{
		std::cout << "\tA saved contact cannot have empty fields." << std::endl;
		return ;
	}
	std::cout << "\tEnter the nickname: ";
	std::getline(std::cin, nickname);
	if (nickname.empty())
	{
		std::cout << "\tA saved contact cannot have empty fields." << std::endl;
		return ;
	}
	std::cout << "\tEnter the phone number: ";
	std::getline(std::cin, phone_number);
	if (phone_number.empty())
	{
		std::cout << "\tA saved contact cannot have empty fields." << std::endl;
		return ;
	}
	std::cout << "\tEnter the darkest secret: ";
	std::getline(std::cin, darkest_secret);
	if (darkest_secret.empty())
	{
		std::cout << "\tA saved contact cannot have empty fields." << std::endl;
		return ;
	}
	contact.set_first_name(first_name);
	contact.set_last_name(last_name);
	contact.set_nickname(nickname);
	contact.set_phone_number(phone_number);
	contact.set_darkest_secret(darkest_secret);
	index = total % MAX_SIZE_CONTACTS;
	this->contacts[index] = contact;
	this->total++;
}


std::string	PhoneBook::format_string(std::string unformated)
{
	std::string formated;

	formated = unformated;
	if (formated.size() > 9)
	{
		formated.resize(9);
		formated.resize(10, '.');
	}
	return (formated);
}

/* Wwith setw , it aligns at the right by default.*/
/* string.resize cuts the string until size n. if the string is shorter, 
then it fills with de char passed by arg.*/
void	PhoneBook::print_contact_resume(void)
{
	size_t		i;
	Contact		contact;
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	
	i = 0;
	while (i < this->total)
	{
		contact = this->contacts[i];
		firstName = this->format_string(contact.get_first_name());
		lastName = this->format_string(contact.get_last_name());
		nickName = this->format_string(contact.get_nickname());
		std::cout << std::setw(10) << i;
		std::cout << " | " << std::setw(10)  << firstName;
		std::cout << " | " << std::setw(10)  << lastName;
		std::cout << " | " << std::setw(10)  << nickName << std::endl;
		i++;
	}
}

void	PhoneBook::print_contact(size_t index)
{
	Contact	contact;

	contact = this->contacts[index];
	std::cout << "\tindex: " << index << std::endl;
	std::cout << "\tfirst name: " << contact.get_first_name() << std::endl;
	std::cout << "\tlast name: " << contact.get_last_name() << std::endl;
	std::cout << "\tnickname: " << contact.get_nickname() << std::endl;
	std::cout << "\tphone number: " << contact.get_phone_number() << std::endl;
	std::cout << "\tdarkest secret: " << contact.get_darkest_secret() << std::endl;
}

void	PhoneBook::search(void)
{
	size_t	index;

	this->print_contact_resume();
	std::cout << "Enter the index of the contact: ";
	std::cin >>  index;
	if (index <= MAX_SIZE_CONTACTS)
	{
		if (index < this->total)
			this->print_contact(index);
		else
			std::cout << "ERROR: invalid index" << std::endl;
	}
	else
		std::cout << "ERROR: invalid index" << std::endl;
}