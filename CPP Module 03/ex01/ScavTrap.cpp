/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keak <keak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 20:53:57 by keak              #+#    #+#             */
/*   Updated: 2026/01/25 21:07:57 by keak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap()
{
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap Name Constructor called for " << this->_name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    std::cout << "ScavTrap Copy Constructor called" << std::endl;
    *this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    std::cout << "ScavTrap Copy Assignment Operator called" << std::endl;
    if (this != &other)
    {
        ClapTrap::operator=(other);
    }
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called for " << this->_name << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->_energyPoints == 0)
    {
        std::cout << "ScavTrap " << this->_name << " has no energy to attack!" << std::endl;
        return ;
    }
    if (this->_hitPoints == 0)
    {
        std::cout << "ScavTrap " << this->_name << " is dead and cannot attack!" << std::endl;
        return ;
    }

    this->_energyPoints--;
    std::cout << "ScavTrap " << this->_name << " attacks " << target << ", dealing " << this->_attackDamage << " damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode." << std::endl;
}
