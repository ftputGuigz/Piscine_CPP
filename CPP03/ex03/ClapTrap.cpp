/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 23:10:02 by gpetit            #+#    #+#             */
/*   Updated: 2021/09/28 15:10:51 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap( void ) : _name("Random"), _hitpoints(10), _nrjpoints(10), _atckdmg(0)
{
	std::cout << GREY YELLOW;
	std::cout << "ClapTrap " << this->_name << " created and ready to attack.";
	std::cout << RESET << std::endl;
	return ;
}

ClapTrap::ClapTrap( std::string input ) : _name(input), _hitpoints(10), _nrjpoints(10), _atckdmg(0)
{
	std::cout << GREY YELLOW;
	std::cout << "ClapTrap " << this->_name << " created and ready to attack.";
	std::cout << RESET << std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap & src){
	*this = src;
	return ;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap( void ){
	std::cout << GREY YELLOW;
	std::cout << "ClapTrap " << this->_name << " end his watch.";
	std::cout << RESET << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap & ClapTrap::operator=( const ClapTrap & rhs ){
	_name = rhs.get_name();
	_hitpoints = rhs.get_hp();
	_nrjpoints = rhs.get_nrj();
	_atckdmg = rhs.get_atck();
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	ClapTrap::attack( std::string const & target ){
	if (!this->get_hp())
		std::cout << "ClapTrap " << this->_name << " is broken and needs repair !" << std::endl;
	else if (!this->get_nrj())
		std::cout << "ClapTrap " << this->_name << " is exhausted, and cannot fight no more." << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->_name << GREEN " attack " RESET << target << ", causing " << GREEN << this->_atckdmg << RESET << " points of damage!" << std::endl;
		this->set_nrj(this->get_nrj() - 1);
	}
	return ;
}

void	ClapTrap::takeDamage( unsigned int amount ){
	if (!this->get_hp())
		return;
	std::cout << "ClapTrap " << this->_name << RED " get attack" RESET " taking " RED << amount << RESET " points of damage!" << std::endl;
	if (this->get_hp() <= amount)
		this->set_hp(0);
	else
		this->set_hp(this->get_hp() - amount);
}

void	ClapTrap::beRepaired( unsigned int amount ){
	std::cout << "ClapTrap " << this->_name << " is being" BLUE " repaired" RESET ", increasing his life of " BLUE << amount << RESET << " points." << std::endl;
	this->set_hp(this->get_hp() + amount);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string ClapTrap::get_name( void ) const {
	return (this->_name);
}

unsigned int	ClapTrap::get_hp( void ) const{
	return (this->_hitpoints);
}

unsigned int	ClapTrap::get_nrj( void ) const{
	return (this->_nrjpoints);
}

unsigned int	ClapTrap::get_atck( void ) const{
	return (this->_atckdmg);
}
		
void		ClapTrap::set_hp( int const amount ){
	this->_hitpoints = amount;
}

void		ClapTrap::set_nrj( int const amount ){
	this->_nrjpoints = amount;
}

void		ClapTrap::set_atck( int const amount ){
	this->_atckdmg = amount;
}
