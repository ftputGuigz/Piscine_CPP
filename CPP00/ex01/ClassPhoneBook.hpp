/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhoneBook.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetit <gpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 18:08:12 by gpetit            #+#    #+#             */
/*   Updated: 2021/09/17 18:01:05 by gpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyPhoneBook.hpp"
#include "ClassContact.hpp"

#ifndef CLASSPHONEBOOK_HPP
# define CLASSPHONEBOOK_HPP

class PhoneBook{

	public:

		PhoneBook(void);
		~PhoneBook(void);

		void	add(void);
		void	search(void) const;
		void	shift_left(void);

	private:

		Contact		_list[8];
		static int	_size;
};

#endif
