/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 18:13:19 by gpetit            #+#    #+#             */
/*   Updated: 2021/10/19 13:10:54 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span( void ) : _max(0){
	return ;
}

Span::~Span( void ){
	return ;
}

Span::Span( unsigned int N) : _max(N){
	return ;	
}

Span::Span( Span const & cpy){
	*this = cpy;
}

Span & Span::operator=(Span const & rhs){
	if (&rhs == this)
		return *this;
	_max = rhs.getMax();
	this->_elem.resize(_max);
	std::vector<int> const copied = rhs.get_elem();
	std::copy(copied.begin(), copied.end(), this->_elem.begin());
	return *this;
}

unsigned int	Span::getMax(void) const{
	return (_max);
}

std::vector<int> const & Span::get_elem( void ) const{
	return _elem;
}

void			Span::addNumber( int nb ){
	if (_elem.size() == _max)
		throw FullVector();
	else
		_elem.push_back(nb);
}

unsigned int	Span::longestSpan( void ){
	if (_elem.size() == 1)
		throw OneElem();
	if (_elem.empty())
		throw NoNumbersStored();

	typedef std::vector<int>::iterator iterator_int;
	iterator_int it1 = _elem.begin();
	iterator_int itlast = _elem.end();

	std::sort(it1, itlast);
	return *(itlast - 1) - *it1;
}

unsigned int	Span::shortestSpan( void ){
	if (_elem.size() == 1)
		throw OneElem();
	if (_elem.empty())
		throw NoNumbersStored();

	typedef std::vector<int>::iterator iterator_int;
	iterator_int it1 = _elem.begin();
	iterator_int itlast = _elem.end();
	
	unsigned int diff = longestSpan();
	for (; it1 + 1 != itlast; it1++)
	{
		diff = std::min(diff, static_cast<unsigned int>(abs(*(it1 + 1) - *it1)));
	}
	return (diff);
}

std::ostream & operator<<(std::ostream & o, Span const & rhs)
{	
		std::vector<int> cpy = rhs.get_elem();
		std::vector<int>::iterator it1 = cpy.begin();
		int max = *it1;
		int min = *it1;
		for (; it1 != cpy.end(); it1++)
		{
			if (*it1 > max)
				max = *it1;
			if (*it1 < min)
				min = *it1;
		}
		for (it1 = cpy.begin(); it1 != cpy.end(); it1++)
		{
			if (*it1 == max || *it1 == min)
				o << RED << *it1 << RESET << " ";
			else
				o << *it1 << " ";
		}
		return o;
}
