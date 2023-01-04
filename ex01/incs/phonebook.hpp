/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunoazuara <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 21:44:45 by brunoazu          #+#    #+#             */
/*   Updated: 2023/01/04 11:18:32 by brunoazu         ###   ########.fr       */
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
		PhoneBook();
};

#endif // !PHONEBOOK_HPP
