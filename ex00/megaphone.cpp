/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunoazuara <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 00:45:53 by brunoazu          #+#    #+#             */
/*   Updated: 2022/12/24 11:58:49 by brunoazu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdio>
#include <cstring>
#include <iostream>

void printUpper (char *str)
{
	int i = 0;
	while(str[i]) {
		std::cout << (char)toupper(str[i]);
		i++;
	}
}

int main (int argc, char *argv[])
{
	int i;

	if (argc == 1)
		printUpper((char *)"* LOUD AND UNBEARABLE FEEDBACK NOISE *");
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
