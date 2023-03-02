/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunoazuara <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 00:45:53 by brunoazu          #+#    #+#             */
/*   Updated: 2023/03/01 11:41:45 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>

// meter en un propio namespace 
namespace 
{
	
void printUpper (const std::string &str)
{
	int i = 0;
	while(str[i]) {
		std::cout << (char)toupper(str[i]); //Cambiar a uso de strings en lugar de char *
		i++;
	}
}
} //namespace end

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
	// mejor con nn para no vaciar el buffer (no lo tengo muy claro)
	std::cout << std::endl;
	return 0;
}
