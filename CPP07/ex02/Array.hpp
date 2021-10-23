/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 11:15:19 by gpetit            #+#    #+#             */
/*   Updated: 2021/10/20 10:38:56 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template< typename T >
class Array
{
	public:

		Array( void ) : _arr(NULL){
			_arr = new T[1] ;
			_size = 1;
		};
		
		Array( unsigned int n ) : _arr(NULL){
			_arr =  new T[n];
			_size = n;
		};
	
		Array( Array & rhs ) : _arr(NULL)
		{
			*this = rhs;
		};
		
		virtual ~Array( void ){ delete [] _arr;};

		Array & operator=( Array & src )
		{
			if (_arr)
				delete [] _arr;
			_size = src.size();
			_arr = new T[_size];
			for (unsigned int i = 0; i < _size; i++)
				_arr[i] = src[i];
			return (*this);
		};

		T & operator[]( unsigned int idx ){
			if (idx < 0 || idx >= _size)
				throw OutOfLimit();
			return (_arr[idx]);
		};
		
		unsigned int const & size( void ) const {
			return (_size);
		};

		class OutOfLimit : public std::exception{
			virtual const char * what() const throw()
			{return ("Out of Limit Index Value");};
		};

	private:

		unsigned int	_size;
		T 				*_arr;
};

template<typename T>
std::ostream & operator<<(std::ostream & o, Array<T> & rhs)
{
	for (unsigned int i = 0; i < rhs.size(); i++)
		o << rhs[i] << " ";
	return o;
}

#endif
