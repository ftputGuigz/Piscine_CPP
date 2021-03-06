/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fire.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 12:56:08 by gpetit            #+#    #+#             */
/*   Updated: 2021/10/01 16:07:34 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fire.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fire::Fire() : AMateria("fire")
{
}

Fire::Fire( const Fire & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fire::~Fire()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fire &				Fire::operator=( Fire const & rhs )
{
	(void) rhs;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

AMateria * Fire::clone() const{
	AMateria *cpy = new Fire();
	return cpy;
}

void	Fire::use(ICharacter & target){
	std::cout << "* shoots a big ball of fire at " << target.getName() << " *" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */