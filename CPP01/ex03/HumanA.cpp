/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 13:41:38 by gpetit            #+#    #+#             */
/*   Updated: 2021/09/22 16:03:37 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"


HumanA::HumanA( std::string name, Weapon& club ) : _name(name), weaponREF(club)
{
	return ;
}

HumanA::~HumanA( void )
{
	return ;
}

void	HumanA::attack( void ) const{
	std::cout << _name << " attacks with his " << weaponREF.getType() << std::endl;
	return ;
}
