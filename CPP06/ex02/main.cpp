/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 10:50:57 by gpetit            #+#    #+#             */
/*   Updated: 2021/10/14 12:28:16 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>

class Base{
	public:
		virtual ~Base( void ){};
};

class A : public Base{};
class B : public Base{};
class C : public Base{};

Base *generate(void)
{
	srand(time(NULL));
	int r = rand() % 3;

	if (r == 0)
	{
		std::cout << "Class A created" << std::endl;
		return (new A);
	}
	else if (r == 1)
	{
		std::cout << "Class B created" << std::endl;
		return (new B);
	}
	else
	{
		std::cout << "Class C created" << std::endl;
		return (new C);
	}
}

void	identify(Base *p)
{
	if (A *a = dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	if (B *b = dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	if (C *c = dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		A & tmp = dynamic_cast<A &>(p);
		(void) tmp;
		std::cout << "A" << std::endl;
		return ;
	}
	catch (std::exception &e)
	{
	}
	try
	{
		B & tmp = dynamic_cast<B &>(p);
		(void) tmp;
		std::cout << "B" << std::endl;
		return ;
	}
	catch (std::exception &e)
	{
	}
	try
	{
		C & tmp = dynamic_cast<C &>(p);
		(void) tmp;
		std::cout << "C" << std::endl;
		return ;
	}
	catch (std::exception &e)
	{
	}
}

int	main(void)
{
	Base *tmp = generate();
	identify(tmp);
	identify(*tmp);
	delete tmp;
}
