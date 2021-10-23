/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 18:07:37 by gpetit            #+#    #+#             */
/*   Updated: 2021/10/13 12:14:11 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

/*
**	ShrubberyCreationForm	SIGN 145, EXEC 137
**	RobotomyRequestForm		SIGN 72,  EXEC 45
**	PresidentialPardonForm	SIGN 25,  EXEC 5
*/

int main (void)
{
	{
		Bureaucrat g("gpetit", 50);
		Bureaucrat exe("ecariot", 25);
		PresidentialPardonForm pf("nboisde");

		std::cout << pf << std::endl;
		g.signForm(pf);
		while (g.getGrade() > 5)
			g++;
		exe.executeForm(pf);
		g.signForm(pf);
		exe.executeForm(pf);
		g.executeForm(pf);
	}
	std::cout << std::endl;
	{
		Bureaucrat g("gpetit", 45);
		RobotomyRequestForm rf("Ugly_robot");

		g.executeForm(rf);
		g.signForm(rf);
		g.executeForm(rf);
	}
	std::cout << std::endl;
	{
		Bureaucrat g("gpetit", 137);
		ShrubberyCreationForm sf("rain_forest");

		g.executeForm(sf);
		g.signForm(sf);
		g.executeForm(sf);
	}
	return (0);
}
