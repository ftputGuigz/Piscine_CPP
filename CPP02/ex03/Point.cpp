#include "Point.hpp"
#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Point::Point( void ) : _x( 0 ), _y( 0 )
{
	return;
}

Point::Point( const float a, const float b ) : _x( a ), _y( b )
{
	return;
}

Point::Point( const Point & src ) : _x(src._x), _y(src._y)
{
	return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Point::~Point()
{
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Point &				Point::operator=( Point const & rhs )
{
	(void) rhs;
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


Fixed	Point::get_x( void ) const {
	return (this->_x);
}
Fixed	Point::get_y( void ) const {
	return (this->_y);
}

/* ************************************************************************** */