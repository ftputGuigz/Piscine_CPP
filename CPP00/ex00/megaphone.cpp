/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:49:01 by gpetit            #+#    #+#             */
/*   Updated: 2021/09/20 15:37:39 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <locale>
#include <string>

int	main(int ac, char **av)
{
	int i;
	int j;
	std::string str;
	std::locale loc;

	if (ac == 1)
	{
		std::getline(std::cin, str);
		if (str.compare(""))
		{
			for (j = 0;  str[j]; j++)
				std::cout << std::toupper(str[j], loc) ;
			std::cout << std::endl ;
		}
		else
			std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else
	{
		for (i = 1; av[i]; i++)
		{
			str = av[i];
			for (j = 0;  str[j]; j++)
				std::cout << std::toupper(str[j], loc);
		}
		std::cout << std::endl;
	}
	return 0;
}
