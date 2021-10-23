/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 11:03:21 by gpetit            #+#    #+#             */
/*   Updated: 2021/09/29 12:04:54 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include "Fixed.hpp"

//CONSTRUCTOR******************************************************************/

Fixed::Fixed( void ) : _value(0)
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

Fixed::Fixed (const int n) : _value(n << _fractionalbits){
	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed (const float f): _value(roundf(f * (1 << _fractionalbits))){
	std::cout << "Float constructor called" << std::endl;
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

/*                                                                            */
/* ************************************************************************** */
/*                                                                            */

Fixed &				Fixed::operator=( const Fixed &rhs )
{
	std::cout << "Assignation operator called" << std::endl;
	this->_value = rhs.getRawBits();
	return *this;
}

std::ostream &		operator<<( std::ostream & o, const Fixed &rhs ){
	o << rhs.toFloat();
	return o;
}

//CLASS FUNCTIONS *************************************************************/

int	Fixed::getRawBits( void ) const{
	return this->_value;
}

void	Fixed::setRawBits( int const raw){
	this->_value = raw;
	return ;
}

float	Fixed::toFloat( void ) const{
	return ((float)this->_value / (1 << this->_fractionalbits));
}

int		Fixed::toInt( void ) const{
	return (_value >> _fractionalbits);
}

/*                                                                            */
/* ************************************************************************** */
/*                                                                            */

const int Fixed::_fractionalbits = 8;
