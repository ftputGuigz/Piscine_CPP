/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 15:04:55 by gpetit            #+#    #+#             */
/*   Updated: 2021/09/29 15:08:38 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongCat::WrongCat( void )
{
	this->setType("WrongCat");
	std::cout << GREY "WrongCat comes puuuurrrrrring" RESET << std::endl;
}

WrongCat::WrongCat( const WrongCat & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongCat::~WrongCat( void )
{
	std::cout << GREY "WrongCat go mad and flee for no reason !" RESET << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongCat &				WrongCat::operator=( WrongCat const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs.getType();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, WrongCat const & i ){
	o << i.getType();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	WrongCat::makeSound( void ) const {
	std::cout << "Meeeeeeooooooooow" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */