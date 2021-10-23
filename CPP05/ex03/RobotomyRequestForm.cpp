/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 10:52:49 by gpetit            #+#    #+#             */
/*   Updated: 2021/10/06 10:57:53 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequest_form", 72, 45), _target("Random Target")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequest_form", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	if ( this != &rhs )
	{
		if (rhs.getSigned())
			this->setSigned();
	}
	return *this;
}

/* std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i )
{
	o << "Robotomy Form " << i.getformName() << " that needs grade " << i.getGts() << " to be signed and grade " << i.getGte() << " to be executed is ";
	if (!i.getSigned())
		o << "unsigned." << std::endl;
	else
		o << "signed." << std::endl;
	return o;
} */


/*
** --------------------------------- METHODS ----------------------------------
*/

void		RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	static int random = 0;
	
	if (!getSigned())
		throw FormNotSignedException();
	if (executor.getGrade() > this->getGte())
		throw GradeTooLowException();
	std::cout << "* DDDDZZZZZZRRRRRInnnninnklllklklklkklkl * ";
	if (random % 2 == 0)
		std::cout << _target << " has been robotomized successfully !" << std::endl;
	else
		std::cout << _target << " robotomization was a failure..." << std::endl;
	random++;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */