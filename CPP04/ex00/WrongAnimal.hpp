/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 15:04:50 by gpetit            #+#    #+#             */
/*   Updated: 2021/09/29 15:08:49 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>

# define GREY_BACK "\033[100m"
# define YELLOW "\033[33m"
# define GREY GREY_BACK YELLOW
# define RESET "\033[0m"


class WrongAnimal{
	
	public:
		
		WrongAnimal( void );
		virtual ~WrongAnimal ( void ) ;
		WrongAnimal( WrongAnimal const & src );

		WrongAnimal & operator=( WrongAnimal const & rhs );
		
		std::string	getType( void )const;
		void		setType( std::string newtype );

		void	makeSound( void ) const;
	
	protected:
		
		std::string _type;
};

std::ostream & operator<<(std::ostream & o, WrongAnimal const & src);

#endif