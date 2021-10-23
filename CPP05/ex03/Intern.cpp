/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 15:19:27 by gpetit            #+#    #+#             */
/*   Updated: 2021/10/06 11:33:29 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
}

Intern::Intern( const Intern & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	(void) rhs;
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

Form *			Intern::_createPresidential( std::string target ){
	return (new PresidentialPardonForm(target));
}

Form *			Intern::_createRobotomy( std::string target ){
	return (new RobotomyRequestForm(target));
}
Form *			Intern::_createShrubbery( std::string target ){
	return (new ShrubberyCreationForm(target));
}

Form * Intern::makeForm( std::string form, std::string target)
{
	typedef Form *	(Intern::*fct)( std::string target );
	fct				tab[3] = {&Intern::_createPresidential, &Intern::_createRobotomy, &Intern::_createShrubbery};
	std::string		tab2[3] = {"presidential request", "robotomy request", "shrubbery request"};

	for(int i = 0; i < 3; i++)
		if (tab2[i] == form)
		{
			std::cout << "Intern creates " << form << std::endl;
			return (this->*(tab[i]))(target);
		}
	throw FormInexistant();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
