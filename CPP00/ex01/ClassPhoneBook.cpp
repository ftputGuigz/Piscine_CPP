/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhoneBook.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 17:49:26 by gpetit            #+#    #+#             */
/*   Updated: 2021/09/20 21:35:31 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyPhoneBook.hpp"
#include "ClassPhoneBook.hpp"
#include <string>
#include <cstdlib>
#include <cerrno>
#include <locale>

PhoneBook::PhoneBook(void)	{
	return ;
}

PhoneBook::~PhoneBook(void){
	return ;
}

void	PhoneBook::shift_left(void){
	int i = 0;
	int j = i + 1;

	while (j < 8)
	{
		this->_list[i] = this->_list[j];
		i++;
		j++;
	}
	return ;
}

void	PhoneBook::add(void) 
{
	int i;

 	if (this->_size == 8)
	{
		std::cout << "Full. Overwriting Oldest Contact with Newest." << std::endl;
		this->shift_left();
	}
	else
		std::cout << "Adding new contact" << std::endl << std::endl;
	if (this->_size < 8)
		this->_size++;
	i = this->_size - 1;
	this->_list[i].register_input();
}

bool	control_input(std::string str, int *value, int size_max)
{
	int 		i;
	std::locale loc;

	for(i = 0; str[i]; i++)
		if (!isdigit(str[i], loc))
			return false;
	*value = strtol(str.c_str(), 0, 0);
	if (errno || *value < 0 || *value >= size_max)
	{	
		errno = 0;
		return false;
	}
	return true;
}

void	PhoneBook::search(void) const
{
	int	i = 0;
	std::string	input;

	std::cout << "*-------------------------------------------*" << std::endl;
	std::cout << "|  index   |first name| last name| nickname |" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	while (i < this->_size)
	{
		_list[i].print_few(i);
		i++;
	}
	std::cout << "*-------------------------------------------*" << std::endl << std::endl;
	if (PhoneBook::_size == 0)
		return ;
	std::cout << "Enter index of the data you want to access :" << std::endl << std::endl;
	while (1)
	{
		getline(std::cin, input);
		if (!control_input(input, &i, _size))
		{
			std::cout << "Wrong input, type a number between 0 and " << _size - 1 << std::endl;
			return ;
		}
		std::cout << "\n*-------------------------------------------*" << std::endl << std::endl;
		if (i >= 0 && i < this->_size)
		{
			_list[i].print_all_elem();
			return ;
		}
	}
}

int	PhoneBook::_size = 0;
