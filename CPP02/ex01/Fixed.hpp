/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 11:03:18 by gpetit            #+#    #+#             */
/*   Updated: 2021/09/29 12:00:30 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed{
	
	public:

		Fixed( void );							//Constructeur par defaut
		~Fixed( void );							//Destruteur
		Fixed ( const Fixed &src); 				//Constructeur par copie

		Fixed ( const int n );					//Constructeur additionnel int
		Fixed ( const float f);					//Constructeur additionnel float

		Fixed & operator=( const Fixed &rhs );	//Operateur d'assignation

		int		getRawBits( void ) const;
		void	setRawBits( int const raw);

		float	toFloat( void ) const;
		int		toInt( void ) const;

	private:
		int					_value;
		static const int	_fractionalbits;
};

std::ostream &	operator<<( std::ostream &o, const Fixed &rhs );

#endif