/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 12:09:04 by gpetit            #+#    #+#             */
/*   Updated: 2021/09/30 23:36:03 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{

	public:

		FragTrap( void );
		FragTrap(std::string name);
		FragTrap( FragTrap const & src );
		virtual ~FragTrap();

		FragTrap &		operator=( FragTrap const & rhs );

		void			highFivesGuys( void );
		
};

#endif /* ******************************************************** FRAGTRAP_H */
