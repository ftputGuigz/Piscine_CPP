/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 12:58:05 by gpetit            #+#    #+#             */
/*   Updated: 2021/10/04 18:21:53 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include <stdexcept>

class Bureaucrat
{

	public:

		Bureaucrat();
		Bureaucrat( std::string newname, unsigned int newgrade);
		Bureaucrat( Bureaucrat const & src );
		virtual ~Bureaucrat();

		Bureaucrat &		operator=( Bureaucrat const & rhs );
		Bureaucrat 			operator++( int );
		Bureaucrat  		operator--( int );

		std::string const	getName( void ) const;
		unsigned int		getGrade( void ) const;

		void				incrementGrade( void ) ;
		void				decrementGrade( void ) ;

		class GradeTooHighException : public std::exception{
			virtual const char * what() const throw()
			{ 
				return ("Grade Too High !");
			}
		};
		class GradeTooLowException : public std::exception{
			virtual const char * what() const throw()
			{ 
				return ("Grade Too Low !");
			}
		};

	private:

		std::string const	_name;
		unsigned int		_grade;

};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & src);