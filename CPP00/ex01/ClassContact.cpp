/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 11:58:08 by gpetit            #+#    #+#             */
/*   Updated: 2021/09/20 17:27:44 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyPhoneBook.hpp"
#include "ClassContact.hpp"
#include <string>

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

std::string	Contact::ten_str(std::string str) const
{
	std::string new_str;

	if (str.size() > 10)
	{
		new_str = str.substr(0, 10);
		new_str.at(9) = '.';
	}
	else
		new_str = str;
	return (new_str);
}

void	Contact::print_few(int i) const
{
	std::cout << "|" << std::setw(10) << std::right << i;
 	std::cout << "|" << std::setw(10) << std::right << ten_str(_first_name);
	std::cout << "|" << std::setw(10) << std::right << ten_str(_last_name);
	std::cout << "|" << std::setw(10) << std::right << ten_str(_nickname);
	std::cout << "|" << std::endl;
}

void	Contact::print_all_elem(void) const
{
	std::cout << "FIRST NAME > " << _first_name << " <" << std::endl;
	std::cout << "LAST NAME > " << _last_name << " <" << std::endl;
	std::cout << "NICKNAME > " << _nickname << " <" << std::endl;
	std::cout << "PHONE NUMBER > " << _phonenumber << " <" << std::endl;
	std::cout << "DARKEST SECRET > " << _darkest_secret << " <" << std::endl << std::endl ;
}

void	Contact::register_input(void)
{
	std::cout << "Enter First Name :" << std::endl;
	std::getline(std::cin, this->_first_name);
	std::cout << std::endl;

	std::cout << "Enter Last Name :" << std::endl;
	std::getline(std::cin, this->_last_name);
	std::cout << std::endl;

	std::cout << "Enter Nickname :" << std::endl;
	std::getline(std::cin, this->_nickname);
	std::cout << std::endl;

	std::cout << "Enter Phonenumber :" << std::endl;
	std::getline(std::cin, this->_phonenumber);
	std::cout << std::endl;

	std::cout << "Type your darkest secret :" << std::endl;
	std::getline(std::cin, this->_darkest_secret); 
	std::cout << std::endl;
}