/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 14:17:06 by gpetit            #+#    #+#             */
/*   Updated: 2021/09/29 14:18:19 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal( void ) : _type("animal")
{
	std::cout << GREY "Creation of an animal" RESET << std::endl;
	return ;
}


Animal::Animal ( Animal const & src ){
	*this = src;
	return ;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal( void ){
	std::cout << GREY "Death of animal" RESET << std::endl;
	return ;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/


Animal & Animal::operator=(Animal const & rhs){
	this->_type = rhs.getType();
	return *this;
}

std::ostream & operator<<(std::ostream & o, Animal const & src){
	o << src.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Animal::makeSound( void ) const{
	std::cout << "*Animal Noise* ! *Animal Noise* !" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string Animal::getType( void ) const {
	return (this->_type);
}

void		Animal::setType( std::string newtype ){
	this->_type = newtype;
}

/* ************************************************************************** */