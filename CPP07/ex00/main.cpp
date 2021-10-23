/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 13:25:29 by gpetit            #+#    #+#             */
/*   Updated: 2021/10/20 09:30:14 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "function_templates.hpp"

int	main( void ) 
{
	//INT
	{
		int a = 2;
		int b = 3;

		std::cout << "BEFORE SWAP : a = " << a << " b = " << b << std::endl;
		::swap( a, b );
		std::cout << "AFTER SWAP : a = " << a << " b = " << b << std::endl;
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	}	

	//STRING
	{
		std::string c = "chaine1";
		std::string d = "chaine2";
		std::cout << "BEFORE SWAP : c = " << c << " d = " << d << std::endl;
		::swap(c, d);
		std::cout << "AFTER SWAP : c = " << c << " d = " << d << std::endl;
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	return 0; 
}
