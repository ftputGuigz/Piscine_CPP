/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 11:03:14 by gpetit            #+#    #+#             */
/*   Updated: 2021/09/29 12:30:30 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"
#include <cmath>

bool	bsp(const Point a, const Point b, const Point c, const Point point);

int	main(void)
{
	Point a(0, 0);
	Point b(-10, 0);
	Point c(-10, -10);
	Point p(-5, -5);

	if (bsp(a, b, c, p))
		std::cout << "P is in the triangle" << std::endl;
	else
		std::cout << "P is not in the triangle" << std::endl;
	return 0;
}
