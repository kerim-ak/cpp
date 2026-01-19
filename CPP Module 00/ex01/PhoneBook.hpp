/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keak <keak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:11:18 by keak              #+#    #+#             */
/*   Updated: 2026/01/19 18:36:37 by keak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
		int count;
		int nextEmptyPlace;
		int currentIndex;
		Contact contactList[8];
	public:
		PhoneBook();
		void addContact(const Contact &c);
		void displayContacts() const;
		Contact& getContactFromList(int index);
		int getCount();
};

#endif