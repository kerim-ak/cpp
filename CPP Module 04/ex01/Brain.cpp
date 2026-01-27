/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keak <keak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 16:24:12 by keak              #+#    #+#             */
/*   Updated: 2026/01/27 17:36:41 by keak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructed." << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destructed." << std::endl;
}

Brain::Brain(const Brain& other)
{
    std::cout << "Brain deep copy constructor called." << std::endl;
    *this = other;
}

Brain& Brain::operator=(const Brain& other)
{
    std::cout << "Brain assignment operator called." << std::endl;
    if (this != &other)
	{
        for (int i = 0; i < 100; i++)
		{
            this->_ideas[i] = other._ideas[i];
        }
    }
    return (*this);
}

void Brain::setIdea(int index, std::string idea)
{
    if (index >= 0 && index < 100)
        this->_ideas[index] = idea;
}

std::string Brain::getIdea(int index) const
{
    if (index >= 0 && index < 100)
        return (this->_ideas[index]);
    return ("My brain is not that big!");
}
