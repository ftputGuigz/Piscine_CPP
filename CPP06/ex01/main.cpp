/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:10:16 by gpetit            #+#    #+#             */
/*   Updated: 2021/10/14 12:26:21 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>

struct	Data
{
	int			nb;
	double		f1;
	float		f2;
	std::string str;
	Data(int x, double y, float z, std::string str1) : nb(x), f1(y), f2(z), str(str1){};

};

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

void	print_struct(Data *d)
{
	std::cout << "Data content:" << std::endl;
	std::cout << "ADDR = " << d << std::endl;
	std::cout << "nb = " << d->nb << std::endl;
	std::cout << "f1 = " << d->f1 << std::endl;
	std::cout << "f2 = " << d->f2 << std::endl;
	std::cout << "str = " << d->str << std::endl;
}

int	main(void)
{
	uintptr_t ptr_serialized;
	struct Data *ptr_deserialized;

	struct Data *ptr = new Data(42, 42.56, 1993.0821f, "Bonjour Monde");
	std::cout << "<<<BEFORE SERIALIZATION>>>" << std::endl << "----------" << std::endl;
	print_struct(ptr);
	std::cout << std::endl;
	ptr_serialized = serialize(ptr);
	ptr_deserialized = deserialize(ptr_serialized);
	std::cout << "<<<AFTER SERIALIZATION>>>" << std::endl << "-----------" << std::endl;
	print_struct(ptr_deserialized);	
	delete ptr;
}
