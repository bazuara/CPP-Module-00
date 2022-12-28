/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunoazuara <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 21:48:16 by brunoazu          #+#    #+#             */
/*   Updated: 2022/12/28 16:02:06 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <phonebook.hpp>

PhoneBook::PhoneBook()
{
	this->ocupied = 0;
}

void PhoneBook::addContact()
{
	std::cout << "From inside the object: This should add a contact" << std::endl;
}
