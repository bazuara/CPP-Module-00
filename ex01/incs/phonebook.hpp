/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunoazuara <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 21:44:45 by brunoazu          #+#    #+#             */
/*   Updated: 2023/03/01 11:43:24 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <contact.hpp>

struct PhoneBook {
	// primero las publicas y primero constuctor
		PhoneBook();

		void 	addContact();
		void	searchContact();
		void printTableHeaderShort();
		void printTableFooterShort();

	private:
		int		ocupied;
		Contact phone_book[8];
};

#endif // !PHONEBOOK_HPP
