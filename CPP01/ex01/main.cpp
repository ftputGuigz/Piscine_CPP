/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:46:03 by gpetit            #+#    #+#             */
/*   Updated: 2021/09/22 13:20:25 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <locale> 
#include <iostream>
#include <cstdlib>
#include <cerrno>
#include <climits>

Zombie*	zombieHorde( int N, std::string name );

bool	arg_conformity(char *av)
{
	std::locale loc;
	for (int i = 0; av[i]; i++)
		if (!isdigit(av[i],loc))
			return false;
	return true;
}

int	main(int ac, char **av)
{
	//SMALL PARSING
	if (ac == 1)
	{
		std::cout << "no arguments." << std::endl;
		return (1);
	}
	if (ac > 2)
	{
		std::cout << "too many arguments." << std::endl;
		return (1);
	}
	if (!arg_conformity(av[1]))
	{
		std::cout << "please type a valid argument" << std::endl;
		return (1);
	}
	long n = strtol(av[1], 0, 0);
	if (errno || n > INT_MAX || n < INT_MIN)
	{
		std::cout << "please type a valid argument" << std::endl;
		return (1);
	}
	//

	//CREATION OF THE ZOMBIE HORDE
	Zombie *zhorde = zombieHorde((int)n, "Zombie");
	
	//EVERY ZOMBIE SAY THEY NAME
	for (int i = 0 ; i < n; i++)
		zhorde[i].announce();
	
	//FREEING THE MEMORY ALLOCATION OF THE ZOMBIE HORDE
	delete [] zhorde;
	
	return (0);
}