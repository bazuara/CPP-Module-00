/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunoazuara <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 20:06:51 by brunoazu          #+#    #+#             */
/*   Updated: 2023/02/28 11:10:24 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <phonebook.hpp>

void menu(PhoneBook *phone)
{
	std::string input;

	while (true)
	{
		std::cout << "ADD || SEARCH || EXIT" << std::endl;
		std::cin >> input;
		if (input.compare("ADD") == 0)
			phone->addContact();
		else if (input.compare("SEARCH") == 0)
			phone->searchContact();
		else if (input.compare("EXIT") == 0)
		{
			std::cout << "BYEEEEEE" << std::endl;
			exit(0);
		}
		else
			std::cout << "Wrong menu option, please, try again." << std::endl;
	}
}

void test()
{
	Contact obj;
	obj.setIndex(6);
	obj.setFirstName("Pepe");
	obj.setLastName("Perezzzz zzzzzzzzz");
	obj.setNickName("Nick");
	obj.printContactInfo();
	obj.printContactInfo();
	obj.printContactInfo();
}

int main (int argc, char *argv[])
{
	PhoneBook pb;
	(void)argc;
	(void)argv;
	menu(&pb);
	// test();
	return 0;
}
