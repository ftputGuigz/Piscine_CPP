/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 10:53:22 by gpetit            #+#    #+#             */
/*   Updated: 2021/10/06 10:57:51 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{

	public:

		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm( RobotomyRequestForm const & src );
		virtual ~RobotomyRequestForm();

		RobotomyRequestForm &		operator=( RobotomyRequestForm const & rhs );

		void		execute(Bureaucrat const & executor) const;
		
	private:

		std::string _target;

};

//std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i );
