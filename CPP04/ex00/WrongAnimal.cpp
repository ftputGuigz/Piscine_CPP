/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 15:04:46 by gpetit            #+#    #+#             */
/*   Updated: 2021/09/29 15:10:24 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongAnimal::WrongAnimal( void ) : _type("Wronganimal")
{
	std::cout << GREY "Creation of a Wronganimal" RESET << std::endl;
	return ;
}


WrongAnimal::WrongAnimal ( WrongAnimal const & src ){
	*this = src;
	return ;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongAnimal::~WrongAnimal( void ){
	std::cout << GREY "Death of Wronganimal" RESET << std::endl;
	return ;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/


WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs){
	this->_type = rhs.getType();
	return *this;
}

std::ostream & operator<<(std::ostream & o, WrongAnimal const & src){
	o << src.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	WrongAnimal::makeSound( void ) const{
	std::cout << "*WrongAnimal Noise* ! *WrongAnimal Noise* !" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string WrongAnimal::getType( void ) const {
	return (this->_type);
}

void		WrongAnimal::setType( std::string newtype ){
	this->_type = newtype;
}

/* ************************************************************************** */