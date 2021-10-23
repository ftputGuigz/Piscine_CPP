/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:46:58 by gpetit            #+#    #+#             */
/*   Updated: 2021/09/22 11:35:54 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#ifndef __ZOMBIE_HPP__
# define __ZOMBIE_HPP__

class Zombie{
	
	public:

	Zombie( void );
	Zombie( std::string name );
	~Zombie ( void );
	
	void		setzombieName( std::string name );
	std::string getzombieName( void ) const;
	void		announce( void ) const;
	
	private:

	std::string _zombieName;
};

#endif