/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 10:55:16 by gpetit            #+#    #+#             */
/*   Updated: 2021/10/06 10:57:57 by gpetit           ###   ########.fr       */
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

/* std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & i )
{
	o << "Presidential Pardon Form " << i.getformName() << " that needs grade " << i.getGts() << " to be signed and grade " << i.getGte() << " to be executed is ";
	if (!i.getSigned())
		o << "unsigned." << std::endl;
	else
		o << "signed." << std::endl;
	return o;
} */


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