/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 10:55:22 by gpetit            #+#    #+#             */
/*   Updated: 2021/10/06 10:57:19 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include "Form.hpp"

class PresidentialPardonForm : public Form
{

	public:

		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm( PresidentialPardonForm const & src );
		virtual ~PresidentialPardonForm();

		PresidentialPardonForm &		operator=( PresidentialPardonForm const & rhs );

		void		execute(Bureaucrat const & executor) const;

	private:

		std::string _target;

};

//std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & i );
