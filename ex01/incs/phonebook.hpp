/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunoazuara <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 21:44:45 by brunoazu          #+#    #+#             */
/*   Updated: 2022/12/28 16:02:14 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <contact.hpp>

class PhoneBook
{
	private:
		int		ocupied;
		Contact phone_book[8];
	public:
		void 	addContact();
		PhoneBook();
};

#endif // !PHONEBOOK_HPP
