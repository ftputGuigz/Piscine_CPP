/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 12:58:01 by gpetit            #+#    #+#             */
/*   Updated: 2021/10/05 11:42:02 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat() : _name("Random_Bureaucrat"), _grade(150)
{
	std::cout << _name << " of level " << _grade << " created." << std::endl;
}

Bureaucrat::Bureaucrat( std::string newname, unsigned int newgrade) : _name(newname), _grade(newgrade)
{
	if (_grade < 1)
		throw GradeTooHighException();
	else if (_grade > 150)
		throw GradeTooLowException();
	std::cout << "Bureaucrat " << _name << " of level " << _grade << " created." << std::endl;
}

Bureaucrat::Bureaucrat( const Bureaucrat & src ) : _name("Copy_Bureaucrat")
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	if ( this != &rhs )
	{
		this->_grade = rhs.getGrade();
	}
	return *this;
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & src){
	o << src.getName() << ", bureaucrat grade " << src.getGrade();
	return o;
}

Bureaucrat 				Bureaucrat::operator++( int ){
	Bureaucrat old(*this);
	this->incrementGrade();
	return old;
}

Bureaucrat  			Bureaucrat::operator--( int ){
	Bureaucrat old(*this);
	this->decrementGrade();
	return old;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Bureaucrat::incrementGrade( void ){
	if (_grade - 1 < 1)
		throw GradeTooHighException();
	else
		_grade--;
}

void	Bureaucrat::decrementGrade( void ){
	if (_grade + 1 > 150)
		throw GradeTooLowException();
	else
		_grade++;
}

void	Bureaucrat::signForm (Form & frm){
	try
	{
		frm.beSigned(*this);
		std::cout << _name << " signs " << frm.getformName() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << _name << " cannot sign " << frm.getformName() << " because " << e.what() << std::endl;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const	Bureaucrat::getName( void ) const{
	return (_name);
}

unsigned int		Bureaucrat::getGrade( void ) const{
	return (_grade);
}

/* ************************************************************************** */