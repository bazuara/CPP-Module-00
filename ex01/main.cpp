/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunoazuara <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 20:06:51 by brunoazu          #+#    #+#             */
/*   Updated: 2022/12/26 11:13:36 by brunoazu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstring>
#include <iostream>

void menu()
{
	std::string input;

	while (true)
	{
		std::cin >> input;
		if (input.compare("ADD") == 0)
			std::cout << "RESULT OF COMMAND ADD" << std::endl;
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

int main (int argc, char *argv[])
{
	(void)argc;
	(void)argv;
	menu();	
	return 0;
}
