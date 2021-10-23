/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 19:33:28 by gpetit            #+#    #+#             */
/*   Updated: 2021/10/13 11:41:05 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include <stdexcept>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

	public:

		Form( void );
		Form( std::string name, unsigned int gts, unsigned int gte );
		Form( Form const & src );
		virtual ~Form();

		Form &		operator=( Form const & rhs );

		std::string	const	getformName() const;
		bool				getSigned() const;
		unsigned int 		getGts() const;
		unsigned int 		getGte() const;
		
		void				beSigned(Bureaucrat & src);

		class GradeTooHighException : public std::exception
		{
			virtual const char * what() const throw(){
				return ("Form Grade Too High");
			}
		};

		class GradeTooLowException : public std::exception
		{
			virtual const char * what() const throw(){
				return ("Form Grade Too Low");
			}
		};
	
	private:
		
		std::string	const	_formName;
		bool				_signed;
		unsigned int const	_gts;
		unsigned int const	_gte;
};

std::ostream &			operator<<( std::ostream & o, Form const & i );
