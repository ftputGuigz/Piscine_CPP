/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 17:43:37 by gpetit            #+#    #+#             */
/*   Updated: 2021/09/20 17:27:43 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyPhoneBook.hpp"
#include "ClassPhoneBook.hpp"
#include <cstdlib>

void	treat_command(PhoneBook *pb1, std::string input)
{
	std::cout << "*-------------------------------------------*" << std::endl << std::endl;
	if (!input.compare("ADD"))
		pb1->add();
	else if (!input.compare("SEARCH"))
		pb1->search();
	else if (!input.compare("EXIT"))
	{
		std::cout << "Gracefully closing your PhoneBook. See ya." << std::endl;
		exit (0);
	}
	else
	{
		std::cout << "Unknown command, only commands are ADD, SEARCH or EXIT." << std::endl << std::endl;
		return ;
	}
}

int	main(void)
{
	PhoneBook	pb1;
	std::string	input;

	while (1 && std::cin.eof() == 0)
	{
		std::cout << "*-------------------------------------------*" << std::endl << std::endl;
		std::cout << "Enter command ADD, SEARCH or EXIT." << std::endl;
		std::getline(std::cin, input);
		std::cout << std::endl;
		treat_command(&pb1, input);
	}
	return 0;
}
