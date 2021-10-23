/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 14:43:44 by gpetit            #+#    #+#             */
/*   Updated: 2021/10/06 12:51:57 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main( void )
{
	Animal * xli = new Cat();
	delete xli;
	/*{
		Animal *zoo[10];

		for (int i = 0; i < 10; i++)
		{
			if (i < 5)
				zoo[i] = new Dog();
			else
				zoo[i] = new Cat();
		}
		std::cout << std::endl << std::endl;

		for (int i = 0; i < 10; i++)
			zoo[i]->makeSound();

		std::cout << std::endl << std::endl;
		for (int i = 0 ; i < 10; i++)
			delete zoo[i];
		std::cout << std::endl << std::endl;
	}
	{
		Dog basic;
		{
			Dog tmp = basic;
			tmp.getBrain()->printBrain();
		}
		basic.getBrain()->printBrain();
	}*/
	return (0);
}
