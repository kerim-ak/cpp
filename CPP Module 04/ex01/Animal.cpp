/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keak <keak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 23:28:38 by keak              #+#    #+#             */
/*   Updated: 2026/01/25 23:39:03 by keak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
    std::cout << "Animal Constructor called" << std::endl;
}

Animal::Animal(const Animal& other)
{
    std::cout << "Animal Copy Constructor called" << std::endl;
    *this = other;
}

Animal& Animal::operator=(const Animal& other)
{
    if (this != &other)
        this->_type = other._type;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "* Generic Animal Sound *" << std::endl;
}

std::string Animal::getType() const
{
    return this->_type;
}