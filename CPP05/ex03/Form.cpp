/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 19:33:24 by gpetit            #+#    #+#             */
/*   Updated: 2021/10/06 11:43:38 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form() : _formName("Random Form"), _signed(false), _gts(150), _gte(150)
{
}

Form::Form( std::string name, unsigned int gts, unsigned int gte ) : _formName(name), _signed(false), _gts(gts), _gte(gte)
{
	if (_gts < 1 || _gte < 1)
		throw GradeTooHighException();
	else if (_gts > 150 || _gte > 150)
		throw GradeTooLowException();
	else
		return ;
}

Form::Form( const Form & src ) : _formName("Random Form"), _signed(false), _gts(150), _gte(150)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	if ( this != &rhs )
	{
		this->_signed = rhs.getSigned();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << "Form " << i.getformName() << " that needs grade " << i.getGts() << " to be signed and grade " << i.getGte() << " to be executed is ";
	if (!i.getSigned())
		o << "unsigned.";
	else
		o << "signed.";
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Form::beSigned(Bureaucrat & src){
	if (src.getGrade() > _gts)
		throw GradeTooLowException();
	else
		_signed = true;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void				Form::setSigned(){
	_signed = true;
}


std::string	const	Form::getformName() const{
	return (_formName);
}

bool				Form::getSigned() const{
	return (_signed);
}

unsigned int 		Form::getGts() const{
	return (_gts);
}

unsigned int 		Form::getGte() const{
	return (_gte);
}

/* ************************************************************************** */