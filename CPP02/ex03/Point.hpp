#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include <string>
# include "Fixed.hpp"

class Point
{

	public:

		Point( void );
		Point( const float a, const float b );
		Point( Point const & src );
		~Point();

		Point &		operator=( Point const & rhs );
		Fixed	get_x( void ) const ;
		Fixed	get_y( void ) const ;
	
	private:
		
		Fixed const _x;
		Fixed const _y;

};

#endif /* *********************************************************** POINT_H */