/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 13:03:15 by gpetit            #+#    #+#             */
/*   Updated: 2021/10/06 13:03:16 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class	AMateria;

class ICharacter
{

	public:
		
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0; 
		virtual void equip(AMateria * m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

#endif /* ****************************************************** ICHARACTER_H */