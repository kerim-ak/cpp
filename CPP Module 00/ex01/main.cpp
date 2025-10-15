/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keak <keak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:31:51 by keak              #+#    #+#             */
/*   Updated: 2025/10/15 20:24:37 by keak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

void display_contact(Contact &c)
{
	unsigned long i = 0;
	std::cout << "|";
	if (c.getFirstName().length() <= 10)
	{
		while (i < (10 - c.getFirstName().length()))
		{
			std::cout << " ";
			i++;
		}
		std::cout << c.getFirstName();
	}
	else
	{
		std::cout << c.getFirstName().substr(0, 9) << ".";
	}
	i = 0;
		if (c.getLastName().length() <= 10)
	{
		while (i < (10 - c.getLastName().length()))
		{
			std::cout << " ";
			i++;
		}
		std::cout << c.getLastName();
	}
	else
	{
		std::cout << c.getLastName().substr(0, 9) << ".";
	}
	i = 0;
		if (c.getNickname().length() <= 10)
	{
		while (i < (10 - c.getNickname().length()))
		{
			std::cout << " ";
			i++;
		}
		std::cout << c.getNickname();
	}
	else
	{
		std::cout << c.getNickname().substr(0, 9) << ".";
	}
	std::cout << "|";
}

int main(int argc, char **argv)
{
	std::string input;
	PhoneBook phoneBook = PhoneBook();
	
	(void)argv;
	if (argc != 1)
	{
		std::cout << "Incorrect usage! Correct usage: ./Panaphone" << std::endl;
		std::exit(1);
	}
	while (true)
	{
		std::cout << "Enter command (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			phoneBook.addContact(Contact());
			std::cout << "Enter first name:";
			std::getline(std::cin, input);
			phoneBook.contactList[phoneBook.nextEmptyPlace - 1].setFirstName(input);
			std::cout << "Enter last name:";
			std::getline(std::cin, input);
			phoneBook.contactList[phoneBook.nextEmptyPlace - 1].setLastName(input);
			std::cout << "Enter nickname:";
			std::getline(std::cin, input);
			phoneBook.contactList[phoneBook.nextEmptyPlace - 1].setNickname(input);
			std::cout << "Enter phone number:";
			std::getline(std::cin, input);
			phoneBook.contactList[phoneBook.nextEmptyPlace - 1].setPhoneNumber(input);
			std::cout << "Enter darkest secret:";
			std::getline(std::cin, input);
			phoneBook.contactList[phoneBook.nextEmptyPlace - 1].setDarkestSecret(input);
		}
		if (input == "SEARCH")
		{
			std::cout << "|-------------------------------------------|" << std::endl;
			std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
			int i = 0;
			while (i < phoneBook.count)
			{
				display_contact(phoneBook.contactList[i]);
				std::cout << "" << std::endl;
				i++;
			}
			std::cout << "|-------------------------------------------|" << std::endl;
		}
		if (input == "EXIT")
		{
			std::cout << "BYE!!!" << std::endl;
			std::exit(0);
		}
	}
}