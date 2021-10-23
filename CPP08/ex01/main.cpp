/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 20:45:47 by gpetit            #+#    #+#             */
/*   Updated: 2021/10/21 12:35:09 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

#define BIG_VALUE 100000

int main( void )
{

	//THIS one should fail
	try{
		Span sp;

		sp.longestSpan();
	}
	catch ( std::exception & e )
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}
	
	try{
		Span sp(1);

		sp.addNumber(5);

		sp.longestSpan();
	}
	catch ( std::exception & e )
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}

	try{
		Span sp(1);

		sp.addNumber(5);
		sp.addNumber(42);
	}
	catch ( std::exception & e )
	{
		std::cerr << RED << e.what() << RESET << std::endl << std::endl;
	}

	//Main from subject
	try {
			Span sp = Span(5);
			sp.addNumber(5); 
			sp.addNumber(3); 
			sp.addNumber(17);
			sp.addNumber(9); 
			sp.addNumber(11);
			std::cout << "Shortest Span : " << sp.shortestSpan() << std::endl; 
			std::cout << "Longest Span : " << sp.longestSpan() << std::endl << std::endl; 
		}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}
	
	//Visual TEST
	try {
		srand(time(NULL));
		Span sp(100);
		for (int i = 0; i < 100; i++)
		{
			sp.addNumber(rand() % 100);
		}
		std::cout << sp << std::endl;
		std::cout << "Shortest Span : " << sp.shortestSpan() << std::endl; 
		std::cout << "Longest Span : " << sp.longestSpan() << std::endl << std::endl; 
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}

	//10000 members
	try{
		srand(time(NULL));
		Span sp(10000);
		for (int i = 0; i < 10000; i++)
		{
			sp.addNumber(rand() % 10000);
		}
		std::cout << "Shortest Span : " << sp.shortestSpan() << std::endl; 
		std::cout << "Longest Span : " << sp.longestSpan() << std::endl << std::endl; 
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}

	//BIG_VALUE
	try{
		srand(time(NULL));
		Span sp(BIG_VALUE);
		for (int i = 0; i < BIG_VALUE; i++)
		{
			sp.addNumber(rand() % BIG_VALUE);
		}
		std::cout << "Shortest Span : " << sp.shortestSpan() << std::endl; 
		std::cout << "Longest Span : " << sp.longestSpan() << std::endl; 
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}
}
