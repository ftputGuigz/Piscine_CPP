/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 12:43:56 by gpetit            #+#    #+#             */
/*   Updated: 2021/10/01 15:34:47 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{

	public:

		MateriaSource();
		MateriaSource( MateriaSource const & src );
		~MateriaSource();

		MateriaSource &		operator=( MateriaSource const & rhs );

		void		learnMateria(AMateria * new_materia);
		AMateria *	createMateria(std::string const & type);
	
		unsigned int get_knownMaterias( void ) const;
	
	private:
		
		unsigned int	_knownMaterias;
		AMateria *		_source[4];
};

#endif /* *************************************************** MATERIASOURCE_H */