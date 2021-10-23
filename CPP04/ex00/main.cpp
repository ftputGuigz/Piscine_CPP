/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 14:43:44 by gpetit            #+#    #+#             */
/*   Updated: 2021/10/06 12:37:21 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main( void )
{
	{
		const Animal* meta = new Animal(); 
		const Animal* i = new Cat();
		const Animal* j = new Dog();

		std::cout << i->getType() << std::endl; 
		std::cout << j->getType() << std::endl; 
		i->makeSound(); //will output the cat sound! j->makeSound();
		j->makeSound();
		meta->makeSound();

		delete meta;
		delete i;
		delete j;
	}
	{
		std::cout << std::endl << std::endl;
		const WrongAnimal *wc = new WrongCat();
		const WrongCat		*wc2 = new WrongCat();
		
		wc->makeSound();
		wc2->makeSound();

		delete wc2;
		delete wc;
	}
}