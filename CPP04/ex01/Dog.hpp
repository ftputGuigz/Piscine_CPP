/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 14:43:30 by gpetit            #+#    #+#             */
/*   Updated: 2021/09/30 15:49:25 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{

	public:

		Dog( void );
		Dog( Dog const & src );
		virtual ~Dog( void );

		Dog &		operator=( Dog const & rhs );
		void		makeSound( void ) const;
		Brain *		getBrain( void ) const;
	
	private:

		Brain *_dog_brain;
};

std::ostream &			operator<<( std::ostream & o, Dog const & i );

#endif /* ************************************************************* DOG_H */