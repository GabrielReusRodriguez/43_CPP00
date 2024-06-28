/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 12:01:40 by greus-ro          #+#    #+#             */
/*   Updated: 2024/06/28 13:32:37 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# define MAX_SIZE_CONTACTS 8

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void		add(Contact contact);
		Contact&	search(size_t _index);
	private:
		Contact contacts[8];
		size_t  index;
};


#endif