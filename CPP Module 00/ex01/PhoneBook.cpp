/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keak <keak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:11:16 by keak              #+#    #+#             */
/*   Updated: 2025/10/16 17:49:53 by keak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook() : count(0), nextEmptyPlace(0), currentIndex(0)
{
	
}

void PhoneBook::addContact(const Contact &c)
{
	if (count < 8)
		count++;
	currentIndex = nextEmptyPlace;
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

Contact& PhoneBook::getContactFromList(int index)
{
	return (this->contactList[index]);
}

int PhoneBook::getCurrentIndex()
{
	return (this->currentIndex);
}

int PhoneBook::getCount()
{
	return (this->count);
}