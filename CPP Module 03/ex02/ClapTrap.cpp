/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keak <keak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 20:03:00 by keak              #+#    #+#             */
/*   Updated: 2026/01/25 20:51:20 by keak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap()
	:_name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap Default Constructor called for " << this->_name << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	:_name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap Name Constructor called for " << this->_name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    std::cout << "ClapTrap Copy Constructor called" << std::endl;
    *this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    std::cout << "ClapTrap Copy Assignment Operator called" << std::endl;
    if (this != &other)
    {
        this->_name = other._name;
        this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_attackDamage = other._attackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called for " << _name << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_energyPoints == 0)
    {
        std::cout << "ClapTrap " << this->_name << " cannot attack! No energy left." << std::endl;
        return ;
    }
    if (this->_hitPoints == 0)
    {
        std::cout << "ClapTrap " << this->_name << " cannot attack! It is dead." << std::endl;
        return ;
    }
    this->_energyPoints--;
    std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints == 0)
    {
        std::cout << "ClapTrap " << this->_name << " is already dead!" << std::endl;
        return;
    }
    if (amount >= this->_hitPoints)
        this->_hitPoints = 0;
    else
        this->_hitPoints -= amount;
    std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage! HP is now " << _hitPoints << "." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energyPoints == 0)
    {
        std::cout << "ClapTrap " << this->_name << " cannot repair! No energy left." << std::endl;
        return ;
    }
    if (this->_hitPoints == 0)
    {
        std::cout << "ClapTrap " << this->_name << " cannot repair! It is dead." << std::endl;
        return ;
    }
    this->_energyPoints--;
    this->_hitPoints += amount;
    std::cout << "ClapTrap " << this->_name << " repairs itself, recovering " << amount << " hit points! HP is now " << _hitPoints << "." << std::endl;
}
