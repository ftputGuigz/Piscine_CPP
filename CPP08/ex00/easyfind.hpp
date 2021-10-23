/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:29:55 by gpetit            #+#    #+#             */
/*   Updated: 2021/10/18 17:58:27 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>

class NoOccurenceFound : public std::exception{
	const char * what() const throw (){return "No Occurence Found";};
};

template<typename T>	
typename T::iterator	easyfind(T & elem, int n)
{
	typename T::iterator occurence = std::find(elem.begin(), elem.end(), n);
	if (occurence == elem.end())
		throw NoOccurenceFound();
	else
		return occurence;
}
