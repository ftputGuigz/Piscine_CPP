/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 16:31:59 by gpetit            #+#    #+#             */
/*   Updated: 2021/10/13 15:55:47 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <string>
#include <iostream>
#include <exception>
#include <cstdlib>
#include <cmath>


bool	check_char(std::string str)
{
	if (str.size() != 1)
		return false;
	if (!isprint(str[0]))
	{
		std::cerr << "Non displayable character" << std::endl;
		return false;
	}
	if (isdigit(str[0]))
		return false;
	return true;
}

bool	check_int(std::string str)
{
	for (int i = 0; str[i]; i++)
	{
		if (str[i] == '-' && i != 0)
			return false;
		if (!isdigit(str[i]) && str[i] != '-')
			return false;
	}
	return true;
}

bool	check_float(std::string str)
{
	if (str == "-inff" || str == "+inff" || str == "nanf")
		return true;
	int point = 0;
	for (int i = 0; str[i]; i++)
	{
		if (str[i] == '-' && i != 0)
			return false;
		if (!isdigit(str[i]) && str[i] != '-' && str[i] != '.' && str[i] != 'f')
			return false;
		if (str[i] == '.' && ((i == 0 || static_cast<unsigned long>(i) == (str.size() - 2)) || \
		(!isdigit(str[i - 1]) || !isdigit(str[i + 1]))))
			return false;
		if (str[i] == '.')
			point++;
		if (point > 1)
			return false; 
		if (str[i] == 'f' && static_cast<unsigned long>(i) != (str.size() - 1))
			return false;
	}
	if (str.find("f", 0) == str.npos)
		return false;
	return true;
}

bool	check_double(std::string str)
{
	if (str == "-inf" || str == "+inf" || str == "nan")
		return true;
	int point = 0;
	for (int i = 0; str[i]; i++)
	{
		if (str[i] == '-' && i != 0)
			return false;
		if (!isdigit(str[i]) && str[i] != '.' && str[i] != '-') 
			return false;
		if (str[i] == '.')
			point++;
		if (point > 1)
			return false; 
	}
	return true;
}

bool	check_input(std::string str, std::string *type)
{
	if (str.empty())
	{
		std::cerr << "Empty String." << std::endl;
		return false;
	}
	if (check_char(str))
	{
		*type = "char";
		return true;
	}
	if (check_int(str))
	{
		*type = "int";
		return true;
	}
	if (check_float(str))
	{
		*type = "float";
		return true;
	}
	if (check_double(str))
	{
		*type = "double";
		return true;
	}
	return false;
}

void	display_char(double r, std::string input, std::string type)
{
	std::cout << "char: ";
	if (input == "nanf" || input == "nan" || input == "-inff" || input == "+inff" || input == "-inf" || input == "+inf")
	{	
		std::cout << "impossible" << std::endl;
		return;
	}
	if (type == "char")
		std::cout << "'" << input << "'" << std::endl;
	else if (isprint(static_cast<char>(r)))
		std::cout << "'" << static_cast<char>(r) << "'" <<  std::endl;
	else
		std::cout << "Non displayable" << std::endl;
}

void	display_int(double r, std::string input)
{	
	std::cout << "int: ";
	if (input == "nanf" || input == "nan" || input == "-inff" || input == "+inff" || input == "-inf" || input == "+inf")
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(r) << std::endl;
}

void	display_float(double r)
{
	std::cout << "float: ";
	std::cout << static_cast<float>(r);
	if (!fmod(r, static_cast<float>(1)))
		std::cout << ".0f" << std::endl;
	else
		std::cout << "f" << std::endl;
}

void	display_double(double r)
{
	std::cout << "double : " << r;
	if (!fmod(r, static_cast<float>(1)))
		std::cout << ".0";
	std::cout << std::endl;
}

void	convert(std::string input, std::string type)
{
	double r = atof(input.c_str());
	
	display_char(r, input, type);
	display_int(r, input);
	display_float(r);
	display_double(r);
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		if (ac == 1)
			std::cerr << "Not enough arguments." << std::endl;
		else
			std::cerr << "Too many arguments." << std::endl;
		return (1);
	}
	std::string type;
	if (!check_input(std::string(av[1]), &type))
	{
		std::cerr << "Unknown type." << std::endl;
		return 1;
	}
	convert(av[1], type);
	return (0);
}
