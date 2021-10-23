/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 13:41:54 by gpetit            #+#    #+#             */
/*   Updated: 2021/09/22 16:18:28 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB
{

	public:

		HumanB( std::string name );
		~HumanB( void );

		void	attack( void ) const;
		void	setWeapon( Weapon& weapon);

	private:
		std::string	_name;
		Weapon*		_weaponPTR;
};

#endif /* ********************************************************** HUMANB_H */