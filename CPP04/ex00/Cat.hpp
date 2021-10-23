/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 14:42:36 by gpetit            #+#    #+#             */
/*   Updated: 2021/09/29 14:43:14 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Cat : public Animal
{

	public:

		Cat( void );
		Cat( Cat const & src );
		virtual ~Cat( void );

		Cat &		operator=( Cat const & rhs );
		void		makeSound( void ) const;
	private:

};

std::ostream &			operator<<( std::ostream & o, Cat const & i );

#endif /* ************************************************************* CAT_H */