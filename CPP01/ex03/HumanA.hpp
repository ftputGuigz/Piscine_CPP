/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 13:41:47 by gpetit            #+#    #+#             */
/*   Updated: 2021/09/26 18:54:24 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA
{

	public:

		HumanA( std::string name, Weapon & club );
		~HumanA( void );

		void	attack( void ) const;

	private:
		std::string	_name;
		Weapon&		weaponREF;
};

#endif /* ********************************************************** HUMANA_H */