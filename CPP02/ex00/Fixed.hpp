/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 11:03:18 by gpetit            #+#    #+#             */
/*   Updated: 2021/09/29 11:57:47 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed{
	
	public:

		Fixed( void );								//Constructeur par defaut
		~Fixed( void );								//Destruteur
		Fixed ( const Fixed &src ); 				//Constructeur par copie

		Fixed & operator=( const Fixed &rhs );		//Operateur d'assignation

		int		getRawBits( void ) const;
		void	setRawBits( int const raw);

	private:
		int					_fixed;
		static const int	_fractionalbits;
};

#endif