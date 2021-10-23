#include "DiamondTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

DiamondTrap::DiamondTrap( void ) : ClapTrap("Random_clap_name"), _name("Random")
{
	std::cout << GREY YELLOW;
	std::cout << "DiamondTrap " << this->_name << " ready to rumble.";
	std::cout << RESET << std::endl;
	set_nrj(50);
	return ;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name"), _name(name)
{
	std::cout << GREY YELLOW;
	std::cout << "DiamondTrap " << this->_name << " ready to rumble.";
	std::cout << RESET << std::endl;
	set_nrj(50);
	return ;
}

DiamondTrap::DiamondTrap( const DiamondTrap & src )
{
	*this = src;
	return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

DiamondTrap::~DiamondTrap( void )
{
	std::cout << GREY YELLOW;
	std::cout << "goodbye DiamondTrap...";
	std::cout << RESET << std::endl;
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

DiamondTrap &				DiamondTrap::operator=( DiamondTrap const & rhs )
{
	if ( this != &rhs )
	{
		this->ClapTrap::_name = rhs.ClapTrap::_name;
		this->_name = rhs.get_name();
		this->_hitpoints = rhs.get_hp();
		this->_nrjpoints = rhs.get_nrj();
		this->_atckdmg = rhs.get_atck();
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void			DiamondTrap::whoAmI( void ) const{
	std::cout << "Hi, My name is " << get_name() << std::endl;
	std::cout << "...and my ClapTrap Name is " << ClapTrap::get_name() << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string		DiamondTrap::get_name( void ) const{
	return (this->_name);
}

/* ************************************************************************** */