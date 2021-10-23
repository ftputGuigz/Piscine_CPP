/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 15:19:34 by gpetit            #+#    #+#             */
/*   Updated: 2021/10/06 11:42:20 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include "Form.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{

	public:

		Intern();
		Intern( Intern const & src );
		virtual ~Intern();

		Intern &		operator=( Intern const & rhs );
		
		Form *			makeForm( std::string formName, std::string target);
		
		class FormInexistant : public std::exception
		{
			public :
				virtual const char *what() const throw(){
					return ("This form doesn't exist");
				}
		};

	private:
		
		Form *			_createPresidential( std::string target );
		Form *			_createRobotomy( std::string target );
		Form *			_createShrubbery( std::string target );
};

