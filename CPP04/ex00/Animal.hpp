/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 14:01:44 by gpetit            #+#    #+#             */
/*   Updated: 2021/10/06 12:32:50 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

# define GREY_BACK "\033[100m"
# define YELLOW "\033[33m"
# define GREY GREY_BACK YELLOW
# define RESET "\033[0m"


class Animal{
	
	public:
		
		Animal( void );
		virtual ~Animal ( void ) ;
		Animal( Animal const & src );

		Animal & operator=( Animal const & rhs );
		
		std::string	getType( void )const;
		void		setType( std::string newtype );

		virtual void	makeSound( void ) const;

	protected:
		
		std::string _type;
};

std::ostream & operator<<(std::ostream & o, Animal const & src);

#endif