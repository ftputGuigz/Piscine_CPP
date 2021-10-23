/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 15:04:59 by gpetit            #+#    #+#             */
/*   Updated: 2021/09/29 15:10:17 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongCAT_HPP
# define WrongCAT_HPP

# include <iostream>
# include <string>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{

	public:

		WrongCat( void );
		WrongCat( WrongCat const & src );
		virtual ~WrongCat( void );

		WrongCat &		operator=( WrongCat const & rhs );
		void		makeSound( void ) const;

	private:

};

std::ostream &			operator<<( std::ostream & o, WrongCat const & i );

#endif /* ******************************************************** WRONGCAT_H */