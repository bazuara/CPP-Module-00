/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunoazuara <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 20:28:00 by brunoazu          #+#    #+#             */
/*   Updated: 2023/02/28 11:09:46 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <iomanip>

class Contact {
private:
	int			index;
	std::string	first_name;
	std::string	last_name;
	std::string	nick_name;
	std::string	phone_number;
	std::string darkest_secret;
	
public:
	void setIndex(int i);
	int getIndex() const;
	void setFirstName(std::string name);
	std::string getFirstName() const;
	void setLastName(std::string name);
	std::string getLastName() const;
	void setNickName(std::string name);
	std::string getNickName() const;
	void setPhoneNumber(std::string number);
	std::string getPhoneNumber() const;
	void setDarkestSecret(std::string secret);
	std::string getDarkestSecret() const;

	void printContactInfo();
};
#endif // !CONTACT_H
