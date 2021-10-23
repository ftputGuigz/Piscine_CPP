/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 13:42:00 by gpetit            #+#    #+#             */
/*   Updated: 2021/09/22 16:26:02 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Weapon::Weapon( void )
{
	this->_type = "random attack club";
	return ; 
}

Weapon::Weapon( std::string weaponofchoice ) : _type(weaponofchoice)
{
	return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Weapon::~Weapon()
{
	return ; 
}

std::string	const &Weapon::getType( void ) const{
	return this->_type;
}

void	Weapon::setType( std::string new_weapon ){
	this->_type = new_weapon;
	return ;
}


/* ************************************************************************** */