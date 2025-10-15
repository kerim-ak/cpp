/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keak <keak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:11:18 by keak              #+#    #+#             */
/*   Updated: 2025/10/15 18:46:29 by keak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
	
	public:
		int count;
		int nextEmptyPlace;
		Contact contactList[8];
		PhoneBook();
		void addContact(const Contact &c);
		void displayContacts() const;
};

#endif