/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keak <keak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 21:16:34 by keak              #+#    #+#             */
/*   Updated: 2026/01/25 22:14:49 by keak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap()
{
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap Default Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap Name Constructor called for " << this->_name << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
    std::cout << "FragTrap Copy Constructor called" << std::endl;
    *this = other;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    std::cout << "FragTrap Copy Assignment Operator called" << std::endl;
    if (this != &other)
    {
        ClapTrap::operator=(other);
    }
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called for " << this->_name << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    if (this->_energyPoints == 0)
    {
        std::cout << "FragTrap " << this->_name << " is too tired to high five..." << std::endl;
        return ;
    }
    if (this->_hitPoints == 0)
    {
        std::cout << "FragTrap " << this->_name << " cannot high five because it is dead." << std::endl;
        return ;
    }
    std::cout << "FragTrap " << this->_name << " requests a positive high five!" << std::endl;
}