/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keak <keak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 23:29:56 by keak              #+#    #+#             */
/*   Updated: 2026/01/27 17:39:03 by keak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->_type = "Cat";
    this->_brain = new Brain();
    std::cout << "Cat constructed with a brain." << std::endl;
}

Cat::~Cat()
{
    delete (this->_brain);
    std::cout << "Cat destroyed." << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other), _brain(NULL)
{
    std::cout << "Cat deep copy constructor." << std::endl;
    *this = other;
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat assignment operator." << std::endl;
    if (this != &other)
    {
        this->_type = other._type;
        if (this->_brain)
            delete (this->_brain);
        this->_brain = new Brain(*other._brain);
    }
    return (*this);
}

Brain* Cat::getBrain() const
{
    return (this->_brain);
}

void Cat::makeSound() const
{
    std::cout << "Meow! Meow!" << std::endl;
}
