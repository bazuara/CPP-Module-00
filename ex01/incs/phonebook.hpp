/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunoazuara <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 21:44:45 by brunoazu          #+#    #+#             */
/*   Updated: 2023/02/28 11:10:04 by bazuara          ###   ########.fr       */
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
		void	searchContact();
		void printTableHeaderShort();
		void printTableFooterShort();
		PhoneBook();
};

#endif // !PHONEBOOK_HPP
