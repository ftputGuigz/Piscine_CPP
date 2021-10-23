/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 15:37:16 by gpetit            #+#    #+#             */
/*   Updated: 2021/09/29 16:50:53 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{

	public:

		Brain();
		Brain( Brain const & src );
		virtual ~Brain();

		Brain &		operator=( Brain const & rhs );
		
		std::string	getIdea( int i ) const ;
		void		setIdea( int i, std::string new_idea);
		
		void		printBrain( void ) const;

	private:

		std::string _ideas[100];
};

#endif /* *********************************************************** BRAIN_H */