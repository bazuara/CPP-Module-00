/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunoazuara <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 20:06:51 by brunoazu          #+#    #+#             */
/*   Updated: 2022/12/28 16:00:33 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <phonebook.hpp>

void menu(PhoneBook *phone)
{
	std::string input;

	while (true)
	{
		std::cin >> input;
		if (input.compare("ADD") == 0)
			phone->addContact();
			// std::cout << "RESULT OF COMMAND ADD" << std::endl;
		else if (input.compare("SEARCH") == 0)
			std::cout << "RESULT OF COMMAND SEARCH" << std::endl;
		else if (input.compare("EXIT") == 0)
		{
			std::cout << "RESULT OF COMMAND EXIT" << std::endl;
			exit(0);
		}
		else
			std::cout << "Wrong menu option, please, try again." << std::endl;
	}
	std::cout << "this is our menu with command "<< input << std::endl;
}

std::string shrinkStrWithDot(std::string str, unsigned long len)
{
	if (str.length() > len)
		return (str.substr(0,9) += ".");
	else
		return (str);
}

void printContactInfo(Contact obj)
{
	std::cout << "|" 
		<< "     " << obj.getIndex()<< "    "<<"|"
		<< std::setw(10) << shrinkStrWithDot(obj.getFirstName(), 10) << "|"
		<< std::setw(10) << shrinkStrWithDot(obj.getLastName(), 10) << "|"
		<< std::setw(10) << shrinkStrWithDot(obj.getNickName(), 10) << "|"
		<< std::endl;	
}

void printTableHeader()
{
	std::cout
		<< "|----------|----------|----------|----------|" << std::endl
		<< "|  Index   |   Name   | LastName |   Nick   |" << std::endl
		<< "|----------|----------|----------|----------|" << std::endl;
}

void printTableFooter()
{
	std::cout
		<< "|__________|__________|__________|__________|" << std::endl;


}

void test()
{
	Contact obj;
	obj.setIndex(6);
	obj.setFirstName("Pepe");
	obj.setLastName("Perez");
	obj.setNickName("Nick");
	printTableHeader();
	printContactInfo(obj);
	printTableFooter();
}

int main (int argc, char *argv[])
{
	PhoneBook pb;
	(void)argc;
	(void)argv;
	menu(&pb);
	return 0;
}
