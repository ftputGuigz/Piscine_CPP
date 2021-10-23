/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 11:03:21 by gpetit            #+#    #+#             */
/*   Updated: 2021/09/29 11:58:15 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _fixed(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( const Fixed & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed &				Fixed::operator=( Fixed const & rhs )
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fixed = rhs.getRawBits();
	return *this;
}

int	Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixed;
}

void	Fixed::setRawBits( int const raw){
	this->_fixed = raw;
	return ;
}


const int Fixed::_fractionalbits = 8;
