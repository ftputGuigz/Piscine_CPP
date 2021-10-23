 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 12:43:53 by gpetit            #+#    #+#             */
/*   Updated: 2021/10/01 12:50:42 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MateriaSource::MateriaSource() : _knownMaterias(0)
{
	for(int i = 0; i < 4; i++)
		_source[i] = NULL;
}

MateriaSource::MateriaSource( const MateriaSource & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

MateriaSource::~MateriaSource()
{
	for(int i = 0; i < 4; i++)
		if (_source[i])
			delete _source[i];
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

MateriaSource &				MateriaSource::operator=( MateriaSource const & rhs )
{
	if ( this != &rhs )
	{
		this->_knownMaterias = rhs.get_knownMaterias();
		for(int i = 0; i < 4; i++)
		{
			if (_source[i])
				delete _source[i];
			_source[i] = rhs._source[i]->clone();
		}
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void MateriaSource::learnMateria(AMateria * new_materia){
	if (_knownMaterias > 3)
	{
		std::cout << "Too many Materias learned..." << std::endl;
		return ;
	}
	_source[_knownMaterias] = new_materia;
	_knownMaterias++;
}

AMateria * MateriaSource::createMateria(std::string const & type){
	for (int i = 0; i < 4; i++)
	{
		if (type == _source[i]->getType())
			return (_source[i]->clone());
	}
	std::cout << "Unknown Materia" << std::endl;
	return (0);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

unsigned int MateriaSource::get_knownMaterias( void ) const{
	return (this->_knownMaterias);
}

/* ************************************************************************** */