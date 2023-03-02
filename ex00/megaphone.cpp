/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunoazuara <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 00:45:53 by brunoazu          #+#    #+#             */
/*   Updated: 2023/03/02 16:04:29 by brunoazu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

namespace 
{
	void printUpper (const std::string &str)
	{
		for (int i = 0; str[i]; i++) {
			std::cout << (char)toupper(str[i]);
		}
	}
} //end namespace

int main (int argc, char *argv[])
{
	int i;

	if (argc == 1)
		printUpper("* LOUD AND UNBEARABLE FEEDBACK NOISE *");
	else {
		i = 1;
		while (i < argc) {
			printUpper(argv[i]);
			i++;
		}
	}
	std::cout << std::endl;
	return 0;
}
