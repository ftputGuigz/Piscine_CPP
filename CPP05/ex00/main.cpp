/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 18:07:37 by gpetit            #+#    #+#             */
/*   Updated: 2021/10/13 11:25:15 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main (void)
{
	{
		try
		{
			Bureaucrat G("gpetit", 2);
			Bureaucrat E("ecariot", 161);
		}
		catch( const std::exception & e )
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try{
			Bureaucrat A("Albert", 10);
			std::cout << A << std::endl;
			for(int i = 0; i < 10; i++)
				A++;
			std::cout << A << std::endl;
			A++;
		}
		catch( const std::exception & e ){
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try{
			Bureaucrat B("Bertrand", 140);
			std::cout << B << std::endl;
			for(int i = 0; i < 10; i++)
				B--;
			std::cout << B << std::endl;
			B--;
		}
		catch( const std::exception & e ){
			std::cerr << e.what() << std::endl;
		}
	}
	return (0);
}
