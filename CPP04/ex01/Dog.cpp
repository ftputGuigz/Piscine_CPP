/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 14:43:27 by gpetit            #+#    #+#             */
/*   Updated: 2021/09/30 17:35:40 by gpetit           ###   ########.fr       */
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
	_dog_brain = new Brain();
}

Dog::Dog( const Dog & src )
{
	std::cout << GREY "Copy Dog appears" RESET << std::endl;
	_dog_brain = new Brain();
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog( void )
{
	delete _dog_brain;
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
		*_dog_brain = *(rhs._dog_brain);
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

Brain *	Dog::getBrain( void ) const{
	return (this->_dog_brain);
}

/* ************************************************************************** */