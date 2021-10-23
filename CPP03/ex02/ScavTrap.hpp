/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 11:16:51 by gpetit            #+#    #+#             */
/*   Updated: 2021/09/27 16:09:46 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

	public:

		ScavTrap( void );
		ScavTrap( std::string name);
		ScavTrap( ScavTrap const & src );
		~ScavTrap( void );

		ScavTrap &		operator=( ScavTrap const & rhs );

		void	guardGate( void );
		void	attack( std::string const & target );

};

#endif /* ******************************************************** SCAVTRAP_H */