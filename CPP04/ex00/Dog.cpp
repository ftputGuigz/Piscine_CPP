/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 14:43:27 by gpetit            #+#    #+#             */
/*   Updated: 2021/09/29 14:58:24 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog( void )
{
	this->setType("Dog");
	std::cout << GREY "a New dog appears" RESET << std::endl;
}

Dog::Dog( const Dog & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog( void )
{
	std::cout << GREY "GoodBye Doggoe !" RESET << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs.getType();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Dog const & i ){
	o << i.getType();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Dog::makeSound( void ) const {
	std::cout << "Woof Woof !" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */