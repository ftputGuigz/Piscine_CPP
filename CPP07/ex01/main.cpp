/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 14:01:11 by gpetit            #+#    #+#             */
/*   Updated: 2021/10/21 11:51:01 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "iter.hpp"


//Small Non-Coplien Class for testing purposes
class Test{
	public : 
		Test( int nb ): _elem(nb){};
		virtual ~Test(void){}; 
		int	get( void ) const {return (_elem);};
	private :
		int _elem;
};

std::ostream & operator<<(std::ostream & o, Test & rhs){
	o << rhs.get();
	return o;
}

template <typename T>
void	print(T const & elem)
{
	std::cout << elem << std::endl;
}

template <typename T>
void	print(T & elem)
{
	std::cout << elem << std::endl;
}

int main(void)
{
	//STR TAB
	{
		std::string	tab[5] = {"Hello", "World", "This", "Is", "Me"};
		iter<std::string>(tab, 5, print);
		std::cout << std::endl;
	} 
 
	//INT TAB
	{
		int	tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
		iter<int>(tab, 10, print);
		std::cout << std::endl;
	}

	//CLASS TAB
	{
		Test tab[4] = {Test(0), Test(21), Test(42), Test(1993)};
		iter<Test>(tab, 4, print);
		std::cout << std::endl;
	}
	return 0;
}

