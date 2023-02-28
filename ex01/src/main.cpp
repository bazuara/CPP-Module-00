/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunoazuara <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 20:06:51 by brunoazu          #+#    #+#             */
/*   Updated: 2023/02/28 12:50:02 by bazuara          ###   ########.fr       */
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

int main (int argc, char *argv[])
{
	PhoneBook pb;
	(void)argc;
	(void)argv;
	menu(&pb);
	return 0;
}
