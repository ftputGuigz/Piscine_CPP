/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 10:34:40 by gpetit            #+#    #+#             */
/*   Updated: 2021/10/06 10:57:44 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form
{

	public:

		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm( ShrubberyCreationForm const & src );
		virtual ~ShrubberyCreationForm();

		ShrubberyCreationForm &		operator=( ShrubberyCreationForm const & rhs );

		void		execute(Bureaucrat const & executor) const;

	private:

		std::string _target;


};

//std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & i );
