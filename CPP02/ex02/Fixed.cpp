/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 11:03:21 by gpetit            #+#    #+#             */
/*   Updated: 2021/09/29 12:24:59 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include "Fixed.hpp"

//CONSTRUCTOR******************************************************************/

Fixed::Fixed( void ) : _value(0)
{
	return ;
}

Fixed::Fixed( const Fixed & src )
{
	*this = src;
	return ;
}

Fixed::Fixed (const int n) : _value(n << _fractionalbits){
	return ;
}

Fixed::Fixed (const float f): _value(roundf(f * (1 << _fractionalbits))){
	return ;
}

Fixed::~Fixed()
{
	//unmute below to see where destruction happend !
	//std::cout << "Ciao Banbino" << std::endl;
	return ;
}

/*                                                                            */
/* ************************************************************************** */
/*                                                                            */

Fixed &				Fixed::operator=( const Fixed &rhs )
{
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

bool	Fixed::operator>( const Fixed &rhs ){
	return (this->_value > rhs.getRawBits());
}

bool	Fixed::operator<( const Fixed &rhs ){
	return (this->_value < rhs.getRawBits());
}

bool	Fixed::operator>=( const Fixed &rhs ){
	return (this->_value >= rhs.getRawBits());
}

bool	Fixed::operator<=( const Fixed &rhs ){
	return (this->_value <= rhs.getRawBits());
}
	
bool	Fixed::operator==( const Fixed &rhs ){
	return (this->_value == rhs.getRawBits());
}

bool	Fixed::operator!=( const Fixed &rhs ){
	return (this->_value != rhs.getRawBits());
}

Fixed	Fixed::operator*( const Fixed &rhs ){
	return (Fixed(toFloat() * rhs.toFloat()));	
}

Fixed	Fixed::operator/( const Fixed &rhs ){
	return (Fixed(toFloat() / rhs.toFloat()));
}

Fixed	Fixed::operator+( const Fixed &rhs ){
	return (Fixed(toFloat() + rhs.toFloat()));
}
Fixed 	Fixed::operator-( const Fixed &rhs ){
	return (Fixed(toFloat() - rhs.toFloat()));
}

Fixed & Fixed::operator++( void ){
	this->_value++;
	return *this;
}

Fixed	Fixed::operator++( int ){
	Fixed tmp = *this;
	this->_value++;
	return tmp;
}

Fixed	Fixed::operator--( int ){
	Fixed tmp = *this;
	this->_value--;
	return tmp;
}

Fixed & Fixed::operator--( void ){
	this->_value--;
	return *this;
}

Fixed & Fixed::min( Fixed &f1, Fixed &f2){
	if (f1 > f2)
		return (f2);
	else
		return (f1);
}

Fixed & Fixed::max( Fixed &f1, Fixed &f2){
	if (f1 < f2)
		return (f2);
	else
		return (f1);
}

const Fixed & Fixed::min( const Fixed &f1, const Fixed &f2){
	if (f1.getRawBits() > f2.getRawBits())
		return (f2);
	else
		return (f1);
}

const Fixed & Fixed::max( const Fixed &f1, const Fixed &f2){
	if (f1.getRawBits() < f2.getRawBits())
		return (f2);
	else
		return (f1);
}

const int Fixed::_fractionalbits = 8;
