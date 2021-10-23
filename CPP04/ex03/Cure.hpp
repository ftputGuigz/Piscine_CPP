/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 12:56:22 by gpetit            #+#    #+#             */
/*   Updated: 2021/10/01 13:24:12 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria
{

	public:

		Cure();
		Cure( Cure const & src );
		virtual ~Cure();

		Cure &		operator=( Cure const & rhs );

		AMateria *	clone() const;
		void		use(ICharacter & target);

	private:

};

#endif /* ************************************************************ CURE_H */