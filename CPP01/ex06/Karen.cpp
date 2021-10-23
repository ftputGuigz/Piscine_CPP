/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 09:45:57 by gpetit            #+#    #+#             */
/*   Updated: 2021/09/26 19:33:19 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Karen::Karen( void )
{
	std::cout << "A wild Karen entered the restaurant" << std::endl;
	return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Karen::~Karen( void )
{
	std::cout << "Karen left the restaurant" << std::endl;
	return ;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Karen::complain(std::string level){
	const std::string	tab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	const	fct			fct_tab[4] = {&Karen::_debug, &Karen::_info, &Karen::_warning, &Karen::_error};
	
	for (int i = 0; i < 4; i++)
	{
		if (tab[i] == level)
		{
			(this->*(fct_tab[i]))();
			return ;
		}
	}
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void	Karen::_debug( void ){
	std::cout << "[ DEBUG ] I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::_info( void ){
	std::cout << "[ INFO ] I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::_warning( void ){
	std::cout << "[ WARNING ] I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::_error( void ){
	std::cout << "[ ERROR ] This is unacceptable, I want to speak to the manager now." << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */