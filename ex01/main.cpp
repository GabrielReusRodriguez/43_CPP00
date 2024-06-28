/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 12:19:34 by greus-ro          #+#    #+#             */
/*   Updated: 2024/06/28 13:25:57 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

#include "Contact.hpp"
#include "PhoneBook.hpp"

#define	CMD_EXIT	"EXIT"
#define CMD_ADD		"ADD"
#define CMD_SEARCH	"SEARCH"

void	add_contact(PhoneBook &phonebook)
{
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
	phonebook.add(contact);
}

void	search_contact(void)
{
	
}

int main(int argc, char **argv)
{
	PhoneBook   phonebook;
	std::string	line;

	(void)argc;
	(void)argv;

	line = "";
	while (line.compare(CMD_EXIT) != 0)
	{
		//std::cin >> line;
		std::cout << "Enter a command: ";
		std::getline(std::cin, line);
		if (line.compare(CMD_ADD) == 0)
			add_contact(phonebook);
		if (line.compare(CMD_SEARCH) == 0)
			search_contact();
	}
	return (0);
}