/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 23:31:51 by gpetit            #+#    #+#             */
/*   Updated: 2021/09/30 23:03:12 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void){
	ClapTrap ct;
	ClapTrap ct2("CT-2000");

	std::cout << std::endl;
	
	ct.attack("Evil Robot");
	ct.takeDamage(5);
	ct.attack("Evil Robot");
	ct.takeDamage(40);
	ct.attack("Evil Robot");
	ct.beRepaired(40);
	ct.attack("Evil Robot");

	std::cout << std::endl;
	
	for (int i = 0; i < 11; i++)
		ct2.attack("Evil Robot");
	std::cout << std::endl;
	return (0);
}
