/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 23:31:51 by gpetit            #+#    #+#             */
/*   Updated: 2021/09/30 23:10:09 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void){
	FragTrap ft("Beebob2000");

	std::cout << std::endl;
	
	ft.attack("General Grivious");
	ft.takeDamage(99);
	ft.attack("General Grivious");
	ft.takeDamage(1);
	ft.attack("General Grivious");
	ft.beRepaired(10);
	
	for(int i = 0; i < 99; i++)
		ft.attack("General Grivious");
	ft.highFivesGuys();

	std::cout << std::endl;

	return (0);
}
