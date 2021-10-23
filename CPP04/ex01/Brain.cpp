/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 15:37:09 by gpetit            #+#    #+#             */
/*   Updated: 2021/09/30 17:19:33 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain()
{
	std::stringstream ss;

	std::cout << GREY "Birth of a Brain" RESET << std::endl;
	for (int i = 0; i < 100; i++)
	{
		ss << "idea_" << i + 1;
		_ideas[i] = ss.str();
		ss.str("");
	}
}

Brain::Brain( const Brain & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
	std::cout << GREY "End of a Brain..." RESET << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain &				Brain::operator=( Brain const & rhs )
{
	std::cout << "Copying Brrrrain" << std::endl;
	if ( this != &rhs )
	{
		for (int i = 0; i < 100; i++)
			setIdea(i, rhs.getIdea(i) + "_copy");
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void		Brain::printBrain( void ) const{
	for (int i = 0; i < 100; i++)
		std::cout << this->getIdea(i) << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	Brain::getIdea( int i ) const{
	return (this->_ideas[i]);
}

void		Brain::setIdea( int i, std::string new_idea){
	this->_ideas[i] = new_idea;
}

/* ************************************************************************** */