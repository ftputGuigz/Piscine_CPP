/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 12:13:32 by gpetit            #+#    #+#             */
/*   Updated: 2021/09/28 17:13:51 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap( void ) : ClapTrap()
{
	std::cout << GREY YELLOW;
	std::cout << "FragTrap " << this->_name << " fresh out the factory.";
	std::cout << RESET << std::endl;
	this->_hitpoints = 100;
	this->_nrjpoints = 100;
	this->_atckdmg = 30;
	return ;
}

FragTrap::FragTrap( std::string name) : ClapTrap(name){
	std::cout << GREY YELLOW;
	std::cout << "FragTrap " << this->_name << " fresh out the factory.";
	std::cout << RESET << std::endl;
	this->_hitpoints = 100;
	this->_nrjpoints = 100;
	this->_atckdmg = 30;
	return ;
}

FragTrap::FragTrap( const FragTrap & src )
{
	*this = src;
	return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

FragTrap::~FragTrap()
{
	std::cout << GREY YELLOW;
	std::cout << "FragTrap " << this->_name << " leaving this world in pieces.";
	std::cout << RESET << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

FragTrap &				FragTrap::operator=( FragTrap const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs.get_name();
		this->_hitpoints = rhs.get_hp();
		this->_nrjpoints = rhs.get_nrj();
		this->_atckdmg = rhs.get_atck();
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void FragTrap::highFivesGuys( void ){
	std::cout << VIOLET "Guyyyys that was siiiiick, high Five anyone ?!! guys ?? anyone ?" RESET << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */