/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 13:07:11 by gpetit            #+#    #+#             */
/*   Updated: 2021/09/26 15:43:59 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Fixed	area(const Point a, const Point b, const Point c){
	Fixed result;

	result = (a.get_x() * (b.get_y() - c.get_y()) + b.get_x() * (c.get_y() - a.get_y()) + c.get_x() * (a.get_y() - b.get_y())) / 2;
	if (result < 0)
		result = result * -1;
	return result;
}

bool	bsp( const Point a, const Point b, const Point c, const Point p){
	
	Fixed a_tri = area(a, b, c);
	Fixed a1 = area(p, b, c);
	Fixed a2 = area(a, p, c);
	Fixed a3 = area(a, b, p);

	return (a_tri == a1 + a2 + a3);
}
