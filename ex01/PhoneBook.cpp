/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 12:17:45 by greus-ro          #+#    #+#             */
/*   Updated: 2024/06/28 13:33:38 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    this->index = 0;
}

PhoneBook::~PhoneBook(void)
{

}

void PhoneBook::add(Contact contact)
{
    if (index > MAX_SIZE_CONTACTS)
        index = 0;
    this->contacts[index] = contact;
    index++;
}

Contact& PhoneBook::search(size_t index)
{
    if (index <= MAX_SIZE_CONTACTS)
    {
        
    }
    else
    {
        return (NULL);
    }
}