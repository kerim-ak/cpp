/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keak <keak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:31:51 by keak              #+#    #+#             */
/*   Updated: 2026/01/19 20:11:45 by keak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

void display_contact(Contact &c)
{
	if (c.getFirstName().length() > 10)
		std::cout << c.getFirstName().substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << c.getFirstName() << "|";
		
	if (c.getLastName().length() > 10)
		std::cout << c.getLastName().substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << c.getLastName() << "|";
		
	if (c.getNickname().length() > 10)
		std::cout << c.getNickname().substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << c.getNickname() << "|";
}

int main(int argc, char **argv)
{
	std::string input;
	PhoneBook phoneBook = PhoneBook();
	
	(void)argv;
	if (argc != 1)
	{
		std::cout << "Incorrect usage! Correct usage: ./Panaphone" << std::endl;
		return (1);
	}
	while (true)
	{
		std::cout << "Enter command (ADD, SEARCH, EXIT): ";
		if (!std::getline(std::cin, input))
			return (0);
		if (input == "ADD")
		{
			Contact newContact;
			
			input = "";
			while (!input.length())
			{
				std::cout << "Enter first name: ";
				if (!std::getline(std::cin, input))
					return (0);
			}
			newContact.setFirstName(input);
			input = "";
			while (!input.length())
			{
				std::cout << "Enter last name: ";
				if (!std::getline(std::cin, input))
					return (0);
			}
			newContact.setLastName(input);
			input = "";
			while (!input.length())
			{
				std::cout << "Enter nickname: ";
				if (!std::getline(std::cin, input))
					return (0);
			}
			newContact.setNickname(input);
			input = "";
			while (!input.length())
			{
				std::cout << "Enter phone number: ";
				if (!std::getline(std::cin, input))
					return (0);
			}
			newContact.setPhoneNumber(input);
			input = "";
			while (!input.length())
			{
				std::cout << "Enter darkest secret: ";
				if (!std::getline(std::cin, input))
					return (0);
			}
			newContact.setDarkestSecret(input);
			phoneBook.addContact(newContact);
			input = "";
		}
		if (input == "SEARCH")
		{
			std::cout << "|-------------------------------------------|" << std::endl;
			std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
			int i = 0;
			while (i < phoneBook.getCount())
			{
				std::cout << "|" << std::setw(10) << i + 1 << "|"; 
				display_contact(phoneBook.getContactFromList(i));
				std::cout << std::endl;
				i++;
			}
			std::cout << "|-------------------------------------------|" << std::endl;
			std::cout << "Enter the index of the contact you want to view: ";
			while (true)
			{
				if (!std::getline(std::cin, input))
					return (0);
				if (input.length() == 1 && input[0] >= '1' && input[0] <= '8' && input[0] - '0' <= phoneBook.getCount())
				{
					phoneBook.getContactFromList(input[0] - '0' - 1).displayContact();
					break;
				}
				else
					std::cout << "Please enter valid index: ";
			}
		}
		if (input == "EXIT")
		{
			std::cout << "BYE!!!" << std::endl;
			return (0);
		}
	}
}
