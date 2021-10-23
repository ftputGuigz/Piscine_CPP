/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:46:03 by gpetit            #+#    #+#             */
/*   Updated: 2021/09/26 18:40:02 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

int	main(void)
{
	Zombie	z("Jean-Pierre");

	Zombie* z1 = newZombie("Robert");;
	Zombie* z2 = newZombie("Alfonse");
	z1->announce();
	z2->announce();
	delete z1;
	delete z2;

	randomChump("Michael");
	randomChump("Jackson");
	z.announce();
	return (0);
}