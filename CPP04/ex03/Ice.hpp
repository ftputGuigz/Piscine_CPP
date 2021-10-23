#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria
{

	public:

		Ice();
		Ice( Ice const & src );
		virtual ~Ice();

		Ice &		operator=( Ice const & rhs );

		AMateria *	clone() const;
		void		use(ICharacter & target);

	private:

};

#endif /* ************************************************************* ICE_H */