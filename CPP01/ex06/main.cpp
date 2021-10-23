/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 09:44:53 by gpetit            #+#    #+#             */
/*   Updated: 2021/09/26 19:32:57 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int ac, char **av)
{
	const std::string	tab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	if (ac != 2)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (0);
	}

	Karen	k_2000;
	int i;

	for (i = 0; i < 4 && av[1] != tab[i]; i++);
	switch (i)
	{
		case 0:
			k_2000.complain("DEBUG");
		case 1:
			k_2000.complain("INFO");
		case 2:
			k_2000.complain("WARNING");
		case 3:
			k_2000.complain("ERROR");
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break ;
	}
	return (0);
}