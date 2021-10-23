/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:36:00 by gpetit            #+#    #+#             */
/*   Updated: 2021/10/20 17:57:32 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "mutantstack.hpp"
#include  <cstdlib>

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define BLUE "\033[34m"
#define YE "\033[33m"

int main(void)
{
	//SCHOOL MAIN
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << RED "TOP ELEM : " RESET << mstack.top() << std::endl;
		mstack.pop();
		std::cout << GREEN "SIZE : " RESET << mstack.size() << std::endl;
		mstack.push(3); 
		mstack.push(5); 
		mstack.push(737); //[...] mstack.push(0);
		std::cout << YE "STACK : " RESET << mstack << std::endl;
		MutantStack<int>::iterator it = mstack.begin(); 
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite) {
			std::cout << "AT ITERATOR = " << *it << std::endl;
			++it; 
		}
		std::stack<int> s(mstack);
		std::cout << std::endl << std::endl;
	}
	
	//First Little Main
	{
		MutantStack<int> tmp;

		tmp.push(78);
		tmp.push(42);
		std::cout << YE "STACK : " RESET << tmp << std::endl;
		std::cout << GREEN "SIZE = " RESET << tmp.size() << std::endl;

		MutantStack<int>::iterator it1 = tmp.begin();
		
		std::cout << "AT ITERATOR = " << *(it1++) << std::endl;
		std::cout << "AT ITERATOR = " << *(it1++) << std::endl;
		if (it1 != tmp.end())
			std::cout << "AT ITERATOR = " << *it1 << std::endl;
		else 
			std::cout << "AT ITERATOR = END" << std::endl;
		std::cout << std::endl << std::endl;
	}
	

	//MY MAIN
	{
		MutantStack<int> mstack;
		srand(time(NULL));

		for (int i = 0; i < 100; i++)
			mstack.push(rand() % 100);
		std::cout << YE "STACK : " RESET << mstack << std::endl;
		std::cout << RED "TOP ELEM : " RESET << mstack.top() << std::endl;
		std::cout << GREEN "STACK SIZE : " RESET << mstack.size() << std::endl;
		std::cout << BLUE "ONE POP" RESET << std::endl;
		mstack.pop();
		std::cout << "STACK : " << mstack << std::endl;
		std::cout << RED "TOP ELEM : " RESET << mstack.top() << std::endl;
		std::cout << GREEN "STACK SIZE : " RESET << mstack.size() << std::endl;
		for (int i = 0; i < 10; i++)
		{	
			std::cout << BLUE "ONE POP" RESET << std::endl;
			mstack.pop();
		}
		std::cout << YE "STACK : " RESET << mstack << std::endl;
		std::cout << RED "TOP ELEM : " RESET << mstack.top() << std::endl;
		std::cout << GREEN "STACK SIZE : " RESET << mstack.size() << std::endl;
		MutantStack<int>::iterator it = mstack.begin();
		std::cout << BLUE "it + 40 : " RESET << *(it + 40) << std::endl << std::endl << std::endl ;
	}

	//STRING
	{
		MutantStack<std::string> stack1;

		stack1.push("Hello");
		stack1.push("World");
		stack1.push("This");
		stack1.push("Is");
		stack1.push("Me");
		stack1.push("Sbuab");
		std::cout << YE "STACK : " RESET << stack1 << std::endl;
		std::cout << RED "TOP ELEM : " RESET << stack1.top() << std::endl;
		std::cout << GREEN "STACK SIZE : " RESET << stack1.size() << std::endl;
		
		MutantStack<std::string> cpy(stack1);

		std::cout << BLUE "ONE POP" RESET << std::endl;
		cpy.pop();
		std::cout << YE "STACK : " RESET << cpy << std::endl;
		std::cout << RED "TOP ELEM : " RESET << cpy.top() << std::endl;
		std::cout << GREEN "STACK SIZE : " RESET << cpy.size() << std::endl;
	}
	return 0;
}
