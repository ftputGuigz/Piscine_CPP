/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 16:46:02 by gpetit            #+#    #+#             */
/*   Updated: 2021/09/26 19:25:41 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstring>
#include <string>
#include <iostream>
#include <fstream>

bool	input_confo(int ac, char **av)
{
	if (ac != 4)
	{	
		std::cout << "Wrong number of arguments." << std::endl;
		return (false);
	}
	else if (!std::string(av[1]).compare("") || !std::string(av[2]).compare("") || !std::string(av[3]).compare(""))
	{
		std::cout << "Empty string." << std::endl;
		return (false);
	}
	return (true);
}

std::string getNewfilename(char *str)
{
	std::string filename;

	filename = str;
	filename += ".replace";
	return (filename);
}

bool	replace(char **av)
{
	//STREAMS//
	std::ofstream ofs;
	std::ifstream ifs(av[0]);
	if (ifs.fail())
	{
		std::cerr << "Fatal error happened while trying to open file." << std::endl ;
		return (false);
	}

	//FILENAME//
	std::string filename;

	//STRINGS//
	std::string str;
	std::string str1 = av[1];
	std::string str2 = av[2];
	size_t		pos;

	filename = getNewfilename(av[0]);
	ofs.open(filename.c_str(), std::ofstream::trunc);
	if (ofs.fail())
	{
		std::cerr << "Fatal error happened while trying to open file." << std::endl ;
		return (false);
	}
	while (!ifs.eof() && !ifs.fail())
	{
		getline(ifs, str);
		pos = 0;
		while ( pos != str.npos)
		{
			pos = str.find(str1, pos);
			if (pos != str.npos)
			{
				str.erase(pos, str1.size());
				str.insert(pos, str2);
			}
		}
		ofs << str;
		if (!ifs.eof())
			ofs << std::endl;
	}
	ifs.close();
	ofs.close();
	return (true);
}

int	main(int ac, char **av)
{
	if (!input_confo(ac, av))
		return (1);
	if (!replace(av + 1))
		return (1);
	return (0);
}
