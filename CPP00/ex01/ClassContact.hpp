/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 11:40:01 by gpetit            #+#    #+#             */
/*   Updated: 2021/09/17 18:11:07 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyPhoneBook.hpp"

#ifndef CLASSCONTACT_HPP
# define CLASSCONTACT_HPP

class Contact{

	public:

		Contact(void);
		~Contact(void);

		void		register_input(void);
		void		print_few(int i) const;
		void		print_all_elem(void) const;
		std::string	ten_str(std::string str) const;
	
	private:
		
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phonenumber;
		std::string	_darkest_secret;
};

#endif