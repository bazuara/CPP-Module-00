/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunoazuara <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 20:28:00 by brunoazu          #+#    #+#             */
/*   Updated: 2022/12/26 21:43:23 by brunoazu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

class Contact {
private:
	int		index;
	// char	*first_name;
	// char 	*last_name;
	// char 	*nick_name;
	
public:
	// Contact();
	void setIndex(int i)
	{
		index = i;
	}
	int getIndex(){
		return(index);
	}
};
#endif // !CONTACT_H
