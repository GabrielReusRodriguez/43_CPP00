/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 23:20:35 by gabriel           #+#    #+#             */
/*   Updated: 2024/06/27 23:20:38 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	magnifice(char *str)
{
	size_t	i;
	char	character;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i]  >= 'a' && str[i] <= 'z')
			character = str[i] - 32;
		else
			character = str[i];
		std::cout << character;
		i++;
	}
}

int main(int argc, char **argv)
{
	int		i;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else
	{
		i = 1;
		while (i < argc)
		{
			magnifice(argv[i]);
			i++;
		}
	}
	std::cout << std::endl;
	return (0);
}