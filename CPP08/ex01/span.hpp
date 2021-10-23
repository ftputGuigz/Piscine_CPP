/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 18:10:25 by gpetit            #+#    #+#             */
/*   Updated: 2021/10/23 22:08:24 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>
#include <cstdlib>
#include <vector>
#include <algorithm>

#define RED "\033[31m"
#define RESET "\033[0m"

class Span{

	public :
		Span( void );
		virtual ~Span( void );
		Span( unsigned int N );
		Span( Span const & cpy );
		
		Span & operator=( Span const & rhs);

		unsigned int				getMax( void ) const;
		std::vector<int> const &	get_elem( void ) const;
		void						addNumber( int nb );
		
		template < typename I >
		void						addRange( I itstart, I itend );

		unsigned int	longestSpan( void );
		unsigned int	shortestSpan( void );

		class NoNumbersStored : public std::exception
		{
			const char * what() const throw() {return "No Numbers Stored in Container";}
		};
		
		class OneElem : public std::exception
		{
			const char * what() const throw() {return "Only One Elem in Container";}
		};

		class FullVector : public std::exception
		{
			const char * what() const throw() {return "Vector is full of elems";}
		};

	private :
		unsigned int		_max;
		std::vector<int>	_elem;
};

std::ostream & operator<<(std::ostream & o, Span const & rhs);

template < typename I>
void			Span::addRange( I itstart, I itend )
{
	for (; itstart != itend; itstart++)
	{
		if (_elem.size() == _max)
			throw FullVector();
		else
			_elem.push_back(*itstart);
	}	
}

