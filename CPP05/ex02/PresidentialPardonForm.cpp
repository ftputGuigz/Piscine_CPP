/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 10:55:16 by gpetit            #+#    #+#             */
/*   Updated: 2021/10/13 11:59:13 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardon_form", 25, 5), _target("Random Target")
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardon_form", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &				PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	if ( this != &rhs )
	{
		if (rhs.getSigned())
			this->setSigned();
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void		PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (!getSigned())
		throw FormNotSignedException();
	if (executor.getGrade() > this->getGte())
		throw GradeTooLowException();
	std::cout << _target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
