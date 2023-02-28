/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunoazuara <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 20:34:31 by brunoazu          #+#    #+#             */
/*   Updated: 2023/02/28 11:06:26 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <contact.hpp>


void Contact::setIndex(int i)
{
	index = i;
}
int Contact::getIndex() const{
	return(index);
}

void Contact::setFirstName(std::string name)
{
	first_name = name;
}
std::string Contact::getFirstName() const{
	return(first_name);
}

void Contact::setLastName(std::string name)
{
	last_name = name;
}
std::string Contact::getLastName() const{
	return(last_name);
}

void Contact::setNickName(std::string name)
{
	nick_name = name;
}
std::string Contact::getNickName() const{
	return(nick_name);
}


void Contact::setPhoneNumber(std::string number)
{
	phone_number = number;
}
std::string Contact::getPhoneNumber() const{
	return(phone_number);
}


void Contact::setDarkestSecret(std::string secret)
{
	darkest_secret = secret;
}
std::string Contact::getDarkestSecret() const{
	return(darkest_secret);
}




std::string shrinkStrWithDot(std::string str, unsigned long len)
{
	if (str.length() > len)
		return (str.substr(0,9) += ".");
	else
		return (str);
}

void Contact::printContactInfo()
{
	std::cout << "|" 
		<< "     " << this->getIndex()<< "    "<<"|"
		<< std::setw(10) << shrinkStrWithDot(this->getFirstName(), 10) << "|"
		<< std::setw(10) << shrinkStrWithDot(this->getLastName(), 10) << "|"
		<< std::setw(10) << shrinkStrWithDot(this->getNickName(), 10) << "|"
		<< std::endl;	
}


