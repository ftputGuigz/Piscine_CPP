/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 13:23:49 by gpetit            #+#    #+#             */
/*   Updated: 2021/09/26 18:49:57 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string * stringPTR = &str;
	std::string & stringREF = str;

	std::cout << &str << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl << std::endl;

	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;


	return (0);
}