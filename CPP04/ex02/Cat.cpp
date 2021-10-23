/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 14:41:08 by gpetit            #+#    #+#             */
/*   Updated: 2021/09/30 17:35:10 by gpetit           ###   ########.fr       */
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
	_cat_brain = new Brain();
}

Cat::Cat( const Cat & src )
{
	std::cout << GREY "Copy Cat puuuurrsss" RESET << std::endl;
	_cat_brain = new Brain();
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat( void )
{
	delete _cat_brain;
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
		*_cat_brain = *(rhs._cat_brain);
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

Brain *	Cat::getBrain( void ) const{
	return (this->_cat_brain);
}


/* ************************************************************************** */