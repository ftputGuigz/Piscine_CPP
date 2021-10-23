/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 14:43:44 by gpetit            #+#    #+#             */
/*   Updated: 2021/10/06 12:59:24 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main( void )
{
	Cat *ct1 = new Cat();
	Dog *dg1 = new Dog();
	std::cout << std::endl;
	delete ct1;
	delete dg1;
	std::cout << std::endl;
	std::cout << std::endl;
	Animal *ct2 = new Cat();
	Animal *dg2 = new Dog();
	std::cout << std::endl;
	ct2->makeSound();
	dg2->makeSound();
	std::cout << std::endl;
	delete ct2;
	delete dg2;
	std::cout << std::endl;
	std::cout << std::endl;
	//Animal *an = new Animal();
	//delete an; 
	std::cout << std::endl;
	
	return (0);
}