/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keak <keak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:11:13 by keak              #+#    #+#             */
/*   Updated: 2025/10/14 18:10:36 by keak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact()
{
	
}

void Contact::setFirstName(std::string firstName)
{
	this->firstName = firstName;
}

void Contact::setLastName(std::string lastName)
{
	this->lastName = lastName;
}

void Contact::setNickname(std::string nickname)
{
	this->nickname = nickname;
}

void Contact::setPhoneNumber(std::string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(std::string darkestSecret)
{
	this->darkestSecret = darkestSecret;
}

void Contact::displayContact() const
{
	std::cout << "FIRST NAME: " << this->firstName << std::endl;
	std::cout << "LAST NAME: " << this->lastName << std::endl;
	std::cout << "NICKNAME: " << this->nickname << std::endl;
	std::cout << "DARKEST SECRET: " << this->darkestSecret << std::endl;
	std::cout << "PHONE NUMBER: " << this->phoneNumber << std::endl;
}