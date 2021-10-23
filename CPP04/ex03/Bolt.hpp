#ifndef BOLT_HPP
# define BOLT_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Bolt : public AMateria
{

	public:

		Bolt();
		Bolt( Bolt const & src );
		virtual ~Bolt();

		Bolt &		operator=( Bolt const & rhs );

		AMateria *	clone() const;
		void		use(ICharacter & target);

	private:

};

#endif /* ************************************************************ BOLT_H */