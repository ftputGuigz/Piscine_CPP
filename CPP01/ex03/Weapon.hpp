/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 13:42:03 by gpetit            #+#    #+#             */
/*   Updated: 2021/09/26 18:53:32 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{

	public:

		Weapon( void );
		Weapon( std::string weaponofchoice );
		~Weapon( void );

		std::string	const &	getType( void ) const;
		void				setType( std::string new_weapon );

	private:
		std::string _type;
};

#endif /* ********************************************************** WEAPON_H */