/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keak <keak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:11:18 by keak              #+#    #+#             */
/*   Updated: 2025/10/16 10:58:24 by keak             ###   ########.fr       */
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
};

#endif