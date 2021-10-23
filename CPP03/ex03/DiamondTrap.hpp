#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include <string>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{

	public:

		DiamondTrap( void );
		DiamondTrap( std::string name );
		DiamondTrap( DiamondTrap const & src );
		~DiamondTrap( void );

		DiamondTrap &		operator=( DiamondTrap const & rhs );

		std::string		get_name( void ) const;
		void			whoAmI( void ) const;

	private:

		std::string _name;
};

#endif /* ***************************************************** DIAMONDTRAP_H */