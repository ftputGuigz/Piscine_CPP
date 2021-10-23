/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 10:41:39 by gpetit            #+#    #+#             */
/*   Updated: 2021/10/13 12:45:33 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery_Form", 145, 137), _target("Random Target")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery_Form", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	if ( this != &rhs )
	{
		if (rhs.getSigned())
			this->setSigned();
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void		ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	if (!getSigned())
		throw FormNotSignedException();
	if (executor.getGrade() > this->getGte())
		throw GradeTooLowException();
	std::ofstream ofs((_target + "_shrubbery").c_str(), std::ofstream::trunc);
	ofs << "\033[33m                                                         ." << std::endl << "\
                                              .         ;  " << std::endl << "\
                 .              .              ;%     ;;   " << std::endl << "\
                   ,           ,                :;%  %;   " << std::endl << "\
                    :         ;                   :;%;'     .,   " << std::endl << "\
           ,.        %;     %;            ;        %;'    ,;" << std::endl << "\
             ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl << "\
              %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl << "\
               ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl << "\
                `%;.     ;%;     %;'         `;%%;.%;'" << std::endl << "\
                 `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl << "\
                    `:%;.  :;bd%;          %;@%;'" << std::endl << "\
                      `@%:.  :;%.         ;@@%;'   " << std::endl << "\
                        `@%.  `;@%.      ;@@%;         " << std::endl << "\
                          `@%%. `@%%    ;@@%;        " << std::endl << "\
                            ;@%. :@%%  %@@%;       " << std::endl << "\
                              %@bd%%%bd%%:;     " << std::endl << "\
                                #@%%%%%:;;" << std::endl << "\
                                %@@%%%::;" << std::endl << "\
                                %@@@%(o);  . '         " << std::endl << "\
                                %@@@o%;:(.,'         " << std::endl << "\
                            `.. %@@@o%::;         " << std::endl << "\
                               `)@@@o%::;         " << std::endl << "\
                                %@@(o)::;        " << std::endl << "\
                               .%@@@@%::;         " << std::endl << "\
                               ;%@@@@%::;.          " << std::endl << "\
                              ;%@@@@%%:;;;. " << std::endl << "\
                          ...;%@@@@@%%:;;;;,.. \033[0m" << std::endl;
	ofs.close();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
