/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fire.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 12:55:28 by gpetit            #+#    #+#             */
/*   Updated: 2021/10/01 13:24:16 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIRE_HPP
# define FIRE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Fire : public AMateria
{

	public:

		Fire();
		Fire( Fire const & src );
		virtual ~Fire();

		Fire &		operator=( Fire const & rhs );

		AMateria *	clone() const;
		void		use(ICharacter & target);

	private:

};

#endif /* ************************************************************ FIRE_H */