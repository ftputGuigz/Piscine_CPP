/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:46:58 by gpetit            #+#    #+#             */
/*   Updated: 2021/09/26 18:33:51 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_HPP__
# define __ZOMBIE_HPP__

# include <string>

class Zombie{
	
	public:

	Zombie ( void );
	Zombie( std::string name );
	~Zombie ( void );
	
	std::string	getzombieName( void ) const;
	void		announce( void ) const;
	
	private:

	std::string _zombieName;
};

#endif