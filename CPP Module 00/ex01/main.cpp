/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keak <keak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:31:51 by keak              #+#    #+#             */
/*   Updated: 2025/10/16 18:04:03 by keak             ###   ########.fr       */
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
	if (c.getFirstName().length() <= 10)
	{
		while (i < (10 - c.getFirstName().length()))
		{
			std::cout << " ";
			i++;
		}
		std::cout << c.getFirstName() << "|";
	}
	else
	{
		std::cout << c.getFirstName().substr(0, 9) << ".|";
	}
	i = 0;
	if (c.getLastName().length() <= 10)
	{
		while (i < (10 - c.getLastName().length()))
		{
			std::cout << " ";
			i++;
		}
		std::cout << c.getLastName() << "|";
	}
	else
	{
		std::cout << c.getLastName().substr(0, 9) << ".|";
	}
	i = 0;
	if (c.getNickname().length() <= 10)
	{
		while (i < (10 - c.getNickname().length()))
		{
			std::cout << " ";
			i++;
		}
		std::cout << c.getNickname() << "|";
	}
	else
	{
		std::cout << c.getNickname().substr(0, 9) << ".|";
	}
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
			std::cout << "Enter first name: ";
			std::getline(std::cin, input);
			phoneBook.getContactFromList(phoneBook.getCurrentIndex()).setFirstName(input);
			std::cout << "Enter last name: ";
			std::getline(std::cin, input);
			phoneBook.getContactFromList(phoneBook.getCurrentIndex()).setLastName(input);
			std::cout << "Enter nickname: ";
			std::getline(std::cin, input);
			phoneBook.getContactFromList(phoneBook.getCurrentIndex()).setNickname(input);
			std::cout << "Enter phone number: ";
			std::getline(std::cin, input);
			phoneBook.getContactFromList(phoneBook.getCurrentIndex()).setPhoneNumber(input);
			std::cout << "Enter darkest secret: ";
			std::getline(std::cin, input);
			phoneBook.getContactFromList(phoneBook.getCurrentIndex()).setDarkestSecret(input);
		}
		if (input == "SEARCH")
		{
			std::cout << "|-------------------------------------------|" << std::endl;
			std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
			int i = 0;
			while (i < phoneBook.getCount())
			{
				std::cout << "|         " << i + 1 << "|";
				display_contact(phoneBook.getContactFromList(i));
				std::cout << "" << std::endl;
				i++;
			}
			std::cout << "|-------------------------------------------|" << std::endl;
			std::cout << "Enter the index of the contact you want to view: ";
			while (true)
			{
				std::getline(std::cin, input);
				if (input == "1" && phoneBook.getCount() >= 1)
				{
					phoneBook.getContactFromList(0).displayContact();
					break;
				}
				else if (input == "2" && phoneBook.getCount() >= 2)
				{
					phoneBook.getContactFromList(1).displayContact();
					break;
				}
				else if (input == "3" && phoneBook.getCount() >= 3)
				{
					phoneBook.getContactFromList(2).displayContact();
					break;
				}
				else if (input == "4" && phoneBook.getCount() >= 4)
				{
					phoneBook.getContactFromList(3).displayContact();
					break;
				}
				else if (input == "5" && phoneBook.getCount() >= 5)
				{
					phoneBook.getContactFromList(4).displayContact();
					break;
				}
				else if (input == "6" && phoneBook.getCount() >= 6)
				{
					phoneBook.getContactFromList(5).displayContact();
					break;
				}
				else if (input == "7" && phoneBook.getCount() >= 7)
				{
					phoneBook.getContactFromList(6).displayContact();
					break;
				}
				else if (input == "8" && phoneBook.getCount() == 8)
				{
					phoneBook.getContactFromList(7).displayContact();
					break;
				}
				else
				{
					std::cout << "Please enter valid index!" << std::endl;
				}
			}
			
		}
		if (input == "EXIT")
		{
			std::cout << "BYE!!!" << std::endl;
			std::exit(0);
		}
	}
}