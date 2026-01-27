/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keak <keak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 23:29:58 by keak              #+#    #+#             */
/*   Updated: 2026/01/27 17:38:51 by keak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->_type = "Dog";
    this->_brain = new Brain();
    std::cout << "Dog constructed with a brain." << std::endl;
}

Dog::~Dog()
{
    delete (this->_brain);
    std::cout << "Dog destroyed." << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other), _brain(NULL)
{
    std::cout << "Dog deep copy constructor." << std::endl;
    *this = other;
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog assignment operator." << std::endl;
    if (this != &other)
    {
        this->_type = other._type;
        if (this->_brain)
            delete (this->_brain);
        this->_brain = new Brain(*other._brain);
    }
    return (*this);
}

Brain* Dog::getBrain() const
{
    return (this->_brain);
}

void Dog::makeSound() const
{
    std::cout << "Woof! Woof!" << std::endl;
}
