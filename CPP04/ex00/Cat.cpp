/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 14:41:08 by gpetit            #+#    #+#             */
/*   Updated: 2021/09/29 14:53:03 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat( void )
{
	this->setType("Cat");
	std::cout << GREY "Cat comes puuuurrrrrring" RESET << std::endl;
}

Cat::Cat( const Cat & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat( void )
{
	std::cout << GREY "Cat go mad and flee for no reason !" RESET << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs.getType();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Cat const & i ){
	o << i.getType();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Cat::makeSound( void ) const {
	std::cout << "Meeeeeeooooooooow" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */