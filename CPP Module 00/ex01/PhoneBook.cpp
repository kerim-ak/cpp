/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keak <keak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:11:16 by keak              #+#    #+#             */
/*   Updated: 2025/10/15 18:49:34 by keak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook() : count(0), nextEmptyPlace(0)
{
	
}

void PhoneBook::addContact(const Contact &c)
{
	if (count < 8)
		count++;
	contactList[nextEmptyPlace] = c;
	nextEmptyPlace = (nextEmptyPlace + 1) % 8;
}

void PhoneBook::displayContacts() const
{
	int	i;

	i = 0;
	while (i < count)
	{
		this->contactList[i].displayContact();
		i++;
	}
}