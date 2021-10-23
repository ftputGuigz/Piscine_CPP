/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 23:31:51 by gpetit            #+#    #+#             */
/*   Updated: 2021/09/30 23:38:20 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main(void){	
	DiamondTrap * dt = new DiamondTrap("Flynn");

	std::cout << std::endl;
	
	dt->whoAmI();
	dt->takeDamage(99);
	dt->attack("Glitch");
	dt->takeDamage(1);
	dt->attack("Glitch");

	dt->beRepaired(1);

	for (int i = 0; i < 50; i++)
		dt->attack("Glitch");
	dt->highFivesGuys();
	dt->guardGate();

	std::cout << std::endl;
	
	delete dt;
	return (0);
}
