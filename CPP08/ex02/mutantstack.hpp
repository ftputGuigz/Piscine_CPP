/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:02:02 by gpetit            #+#    #+#             */
/*   Updated: 2021/10/20 17:41:15 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iterator>
# include <algorithm>
# include <vector>

template< typename T >
class MutantStack : public std::stack<T>
{
	public:
		MutantStack( void );
		MutantStack( MutantStack const & src);
		~MutantStack( void );

		MutantStack & operator=(MutantStack const & rhs);
		typedef typename std::deque<T>::iterator	iterator;
		
		iterator	begin( void );
		iterator 	end( void);
};

template < typename T >
std::ostream & operator<<(std::ostream & o, MutantStack<T> & rhs)
{
	typename std::deque<T>::iterator it1 = rhs.begin();
	typename std::deque<T>::iterator itend = rhs.end();
	for (; it1 != itend; it1++)
		o << *it1 << " ";
	return o;
}

template < typename T>
MutantStack<T>::MutantStack( void )
{
	return ;
}

template < typename T >
MutantStack<T>::MutantStack( MutantStack<T> const & src )
{
	*this = src;
}

template < typename T >
MutantStack<T>::~MutantStack( void )
{
	return ;
}

template < typename T >
MutantStack<T> & MutantStack<T>::operator=( MutantStack<T> const & rhs )
{
	if (&rhs == this)
		return *this;
	this->c = rhs.c;
	return *this;
}

template < typename T >
typename MutantStack<T>::iterator	MutantStack<T>::begin( void )
{
	return (this->c.begin());
}

template < typename T >
typename MutantStack<T>::iterator	MutantStack<T>::end( void )
{
	return (this->c.end());
}

#endif
