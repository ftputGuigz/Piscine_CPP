/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 11:15:05 by gpetit            #+#    #+#             */
/*   Updated: 2021/10/20 11:22:14 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <exception>
#include "Array.hpp"

# define RED "\033[31m"
# define RESET "\033[0m"

//Small Non-Coplien class for testing purposes
class Test{
	public : 
		Test( void ): _elem(0){};
		virtual ~Test( void ){};

		int		get( void ) const {return (_elem);};
		void	set( int n ) { _elem = n;};
	
		Test & operator=( int rhs ) {_elem = rhs; return *this;};

	private :
		int _elem;
};

std::ostream & operator<<(std::ostream & o, Test & rhs){
	o << rhs.get();
	return o;
}

int main(void)
{
	//STRING
	{
		Array<std::string> cpy(10);
		cpy[0] = "Bonjour";
		cpy[1] = "Monde";
		cpy[2] = "c'est";
		cpy[3] = "bien";
		cpy[4] = "moi";
		cpy[5] = ", jeune";
		cpy[6] = "et libre,";
		cpy[7] = "c'est";
		cpy[8] = "gpetit";
		cpy[9] = "from 42 !";

		Array<std::string> tmp(2);
		tmp[0] = "Hello";
		tmp[1] = "World";
		std::cout << tmp << std::endl;
		tmp = cpy;
		std::cout << "Size = " << tmp.size() << std::endl;
		std::cout << "Content = " << tmp << std::endl;
		try{
			std::cout << cpy[100] << std::endl;
		}
		catch (std::exception & e)
		{
			std::cerr << RED << e.what() << RESET << std::endl;
		}
		std::cout << "accessing through [] operator, 9th element in arrar..." << std::endl;
		try {
			std::cout << cpy[8] << std::endl << std::endl;
		}
		catch (std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}

	}
	
	//INT
	{
		Array<int> tmp(10);
		for (int i = 0; i < 10; i++)
			tmp[i] = i;
		std::cout << "Size = " << tmp.size() << std::endl;
		std::cout << "Content = " << tmp << std::endl;
		try{
			std::cout << tmp[-100] << std::endl;
		}
		catch (std::exception & e)
		{
			std::cerr << RED << e.what() << RESET << std::endl;
		}
		std::cout << "accessing through [] operator, 5th element in arrar..." << std::endl;
		try{
			std::cout << tmp[4] << std::endl << std::endl;
		}
		catch (std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	//CLASS
	{
		Array<Test> tmp(10);
		std::cout << "Size = " << tmp.size() << std::endl;
		std::cout << "Content = " << tmp << std::endl;
		try{
			std::cout << "Changing 6th value..." << std::endl;
			tmp[6] = 42;
		}
		catch (std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << "Content = " << tmp << std::endl;
		std::cout << tmp << std::endl;
		try{
			std::cout << tmp[11] << std::endl;
		}
		catch (std::exception & e)
		{
			std::cerr << RED << e.what() << RESET << std::endl;
		}
		std::cout << "accessing through [] operator, 7th element in arrar..." << std::endl;
		try {
			std::cout << tmp[6] << std::endl << std::endl;
		}	
		catch (std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	return (0);
}
