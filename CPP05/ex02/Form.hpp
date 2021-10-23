/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 19:33:28 by gpetit            #+#    #+#             */
/*   Updated: 2021/10/05 12:50:59 by gpetit           ###   ########.fr       */
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
		void				setSigned();
		unsigned int 		getGts() const;
		unsigned int 		getGte() const;
		
		void				beSigned(Bureaucrat & src);

		virtual void		execute(Bureaucrat const & executor) const = 0; //ABSTRACT CLASS

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

		class FormNotSignedException : public std::exception
		{
			virtual const char *  what() const throw(){
				return "Form Not Signed";
			}
		};
	
	private:
		
		std::string	const	_formName;
		bool				_signed;
		unsigned int const	_gts;
		unsigned int const	_gte;
};

std::ostream &			operator<<( std::ostream & o, Form const & i );
