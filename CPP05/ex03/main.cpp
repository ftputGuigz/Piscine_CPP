/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 18:07:37 by gpetit            #+#    #+#             */
/*   Updated: 2021/10/13 12:32:39 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main (void)
{
	Intern		i;
	Form		*f0;
	Form		*f1;
	Form		*f2;
	Form 		*f3;
	
	try
	{
		f3 = i.makeForm("shrubbery request", "nboisde");
		f2 = i.makeForm("robotomy request", "nboisde");
		f1 = i.makeForm("presidential request", "nboisde");
		f0 = i.makeForm("non-existant request", "whoever");
	}
	catch(Intern::FormInexistant & e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;

	Bureaucrat g("Gpetit", 10);
	g.signForm(*f1);
	g.executeForm(*f1);
	for(int j = 0; j < 5; j++)
		g++;
	g.executeForm(*f1);
	g.signForm(*f2);
	g.signForm(*f3);
	g.executeForm(*f2);
	g.executeForm(*f3);
	delete f1;
	delete f2;
	delete f3;
	return (0);
}
