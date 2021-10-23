/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 09:46:06 by gpetit            #+#    #+#             */
/*   Updated: 2021/09/26 19:28:02 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>
# include <string>

class Karen
{
	typedef void	(Karen::*fct)(void);
	
	public:

		Karen( void );
		~Karen( void );

		void	complain(std::string level);

	private:

		void	_debug( void );
		void	_info( void );
		void	_warning( void );
		void	_error( void );

};


#endif /* *********************************************************** KAREN_H */