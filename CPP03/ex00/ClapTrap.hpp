/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 23:06:28 by gpetit            #+#    #+#             */
/*   Updated: 2021/09/28 15:03:28 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

# define GREY "\033[100m"
# define YELLOW "\033[33m"
# define RESET "\033[0m"
# define RED "\033[31m"
# define GREEN "\033[32m"
# define BLUE "\033[36m"
# define VIOLET "\033[35m"

class ClapTrap{
	
	public:

		ClapTrap( void );
		ClapTrap( std::string input_name );
		ClapTrap ( const ClapTrap & src );
		~ClapTrap( void );
		ClapTrap & operator=( const ClapTrap & rhs);
		
		std::string		get_name( void ) const;
		unsigned int	get_hp ( void ) const;
		unsigned int	get_nrj( void ) const;
		unsigned int 	get_atck( void ) const;
		void			set_hp( int const amount );
		void			set_nrj( int const amount );
		void			set_atck( int const amount );

		void		attack( std::string const & target );
		void		takeDamage( unsigned int amount );
		void		beRepaired( unsigned int amount );
	
	private:

		std::string		_name;
		unsigned int	_hitpoints;
		unsigned int	_nrjpoints;
		unsigned int	_atckdmg;
};

#endif
