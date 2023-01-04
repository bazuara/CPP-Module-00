/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunoazuara <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 21:48:16 by brunoazu          #+#    #+#             */
/*   Updated: 2023/01/04 12:01:17 by brunoazu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <phonebook.hpp>

PhoneBook::PhoneBook()
{
	std::cout << "Hello! Welcome to your new Phonebook!" << std::endl;
	std::cout << "Below you will find a list of avalible commands" << std::endl;
	std::cout << "Empty commands will be ignored." << std::endl;
	this->ocupied = 0;
}

void	PhoneBook::addContact()
{
	std::cout << "From inside the object: This should add a contact" << std::endl;
}


void	PhoneBook::searchContact()
{
	std::cout << "From inside the object: This should search for a contact" << std::endl;
}
