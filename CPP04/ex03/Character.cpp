#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character() : _name("Random")
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(std::string newname) : _name(newname)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character( const Character & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if (_inventory[i])
			delete _inventory[i];
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &				Character::operator=( Character const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs.getName();
		for (int i = 0; i < 4; i++)
		{
			if (_inventory[i])
				delete _inventory[i];
			if (!rhs._inventory[i])
				this->_inventory[i] = NULL;
			else
				this->_inventory[i] = rhs._inventory[i]->clone();
		}
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Character const & i )
{
	o << i.getName();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Character::equip(AMateria* m){
	int i = 0;

	for (;i < 4 && _inventory[i]; i++);
	if (i < 4 && _inventory[i] == NULL)
	{
		_inventory[i] = m;
	}
	else
		return ;
}

void Character::unequip(int idx){
	if (idx > 3 || idx < 0 || _inventory[idx])
		return ;
	delete _inventory[idx];
	_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter & target){
	if (idx > 3 || idx < 0 || !_inventory[idx])
		return ;
	_inventory[idx]->use(target);
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const & Character::getName() const{
	return (_name);
}


/* ************************************************************************** */