/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunoazuara <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 20:06:51 by brunoazu          #+#    #+#             */
/*   Updated: 2023/03/01 11:45:22 by bazuara          ###   ########.fr       */
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
		std::cin.clear();
		std::cin.ignore(INT_MAX, '\n');
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

int main ()
{
	PhoneBook pb;
	menu(&pb);
	return 0;
}
