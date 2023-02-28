/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunoazuara <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 21:48:16 by brunoazu          #+#    #+#             */
/*   Updated: 2023/02/28 12:45:42 by bazuara          ###   ########.fr       */
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

	// obj.setFirstName("Pepe");
	// obj.setLastName("Perezzzz zzzzzzzzz");
	// obj.setNickName("Nick");


void	PhoneBook::addContact()
{

	std::string name;
	std::string lastname;
	std::string nick;

	std::cout << "Please, input the contact Name" << std::endl;
	std::cin >> name;
	this->phone_book[this->ocupied % 8].setFirstName(name);

	std::cout << "Please, input the contact Last Name" << std::endl;
	std::cin >> lastname;
	this->phone_book[this->ocupied % 8].setLastName(lastname);
	
	std::cout << "Please, input the contact Nick" << std::endl;
	std::cin >> nick;
	this->phone_book[this->ocupied % 8].setNickName(nick);

	this->phone_book[this->ocupied % 8].setIndex(this->ocupied % 8);
	
	std::cout << "Contact added at position " << this->ocupied << std::endl;

	this->ocupied++;
}

void	PhoneBook::printTableHeaderShort()
{
	std::cout
		<< "|----------|----------|----------|----------|" << std::endl
		<< "|  Index   |   Name   | LastName |   Nick   |" << std::endl
		<< "|----------|----------|----------|----------|" << std::endl;
}

void 	PhoneBook::printTableFooterShort()
{
	std::cout
		<< "|__________|__________|__________|__________|" << std::endl;
}

void	PhoneBook::searchContact()
{
	int i = 0;
	int input;

	// std::cout << "From inside the object: This should search for a contact" << std::endl;
	PhoneBook::printTableHeaderShort();
	while (i < this->ocupied && i < 8)
	{
		this->phone_book[i].printContactInfo();
		i++;
	}
	PhoneBook::printTableFooterShort();
	while (true)
	{
		std::cout << "Please, input the index from the user you want to search" << std::endl;
		std::cin >> input;
		if (input < 0 || input > 7)
		{
			std::cout << "Wrong index" << std::endl;
		}
		else
		{
			if (this->phone_book[input].getFirstName() != "")
			{
				this->printTableHeaderShort();
				this->phone_book[input].printContactInfo();
				this->printTableFooterShort();
			}
			else
				std::cout << "Sorry, empty entry" << std::endl;
			break;
		}
	}
}

