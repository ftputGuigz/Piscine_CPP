/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 10:37:28 by gpetit            #+#    #+#             */
/*   Updated: 2021/10/01 16:19:36 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class AMateria
{

	public:

		AMateria();
		AMateria(std::string newtype);
		AMateria( AMateria const & src );
		virtual ~AMateria();

		AMateria &		operator=( AMateria const & rhs );

		std::string const &	getType() const;
		virtual AMateria *	clone () const = 0;
		virtual void		use (ICharacter & target);

	protected:
		
		std::string const _type; 
};

std::ostream &			operator<<( std::ostream & o, AMateria const & i );

#endif /* ******************************************************** AMATERIA_H */