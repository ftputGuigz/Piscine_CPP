/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function_templates.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 13:20:03 by gpetit            #+#    #+#             */
/*   Updated: 2021/10/11 13:31:35 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template < typename T>
void	swap(T & a, T & b)
{
	T tmp = a;

	a = b;
	b = tmp;
}

template < typename T>
T const & min(T const &a, T const &b)
{
	return (a < b ? a : b);
}

template < typename T>
T const & max(T const &a, T const &b)
{
	return (a > b ? a : b);
}

