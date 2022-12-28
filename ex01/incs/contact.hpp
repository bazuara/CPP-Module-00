/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunoazuara <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 20:28:00 by brunoazu          #+#    #+#             */
/*   Updated: 2022/12/28 13:52:40 by bazuara          ###   ########.fr       */
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
	
public:
	void setIndex(int i)
	{
		index = i;
	}
	int getIndex() const{
		return(index);
	}

	void setFirstName(std::string name)
	{
		first_name = name;
	}
	std::string getFirstName() const{
		return(first_name);
	}

	void setLastName(std::string name)
	{
		last_name = name;
	}
	std::string getLastName() const{
		return(last_name);
	}

	void setNickName(std::string name)
	{
		nick_name = name;
	}
	std::string getNickName() const{
		return(nick_name);
	}

};
#endif // !CONTACT_H
