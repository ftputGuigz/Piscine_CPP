/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 18:07:37 by gpetit            #+#    #+#             */
/*   Updated: 2021/10/13 11:49:18 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"

int main (void)
{
	{
		std::cout << RED "Should Throw an exception" RESET << std::endl;	
		try {
			Form f("Wrong Form", 0, 23);
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
		try {
			Form f("Wrong Form2", 1, 151);
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << std::endl;

	std::cout << GREEN "Should Work" RESET << std::endl;	
	
	Bureaucrat g("gpetit", 50);
	Form	f("A-42", 49, 50);

	g.signForm(f);
	std::cout << f << std::endl;
	g++;
	std::cout << g << std::endl;
	g.signForm(f);
	std::cout << f << std::endl;
	return (0);
}
