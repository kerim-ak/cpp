/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keak <keak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 20:02:55 by keak              #+#    #+#             */
/*   Updated: 2026/01/25 20:53:04 by keak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main(void)
{
    std::cout << "--- TEST 1: Construction ---" << std::endl;
    ClapTrap bob("Bob");
    ClapTrap steve("Steve");

    std::cout << "\n--- TEST 2: Attack & Energy Consumption ---" << std::endl;
    for (int i = 0; i < 11; i++) {
        std::cout << "Round " << i + 1 << ": ";
        bob.attack("Steve");
    }

    std::cout << "\n--- TEST 3: Taking Damage & Repairing ---" << std::endl;
    steve.takeDamage(5);
    steve.beRepaired(3);
    steve.takeDamage(2);

    std::cout << "\n--- TEST 4: Death Mechanics ---" << std::endl;
    steve.takeDamage(100);

    std::cout << "Attempting to attack while dead:" << std::endl;
    steve.attack("Bob");
    
    std::cout << "Attempting to repair while dead:" << std::endl;
    steve.beRepaired(10);

    std::cout << "\n--- TEST 5: Destruction Chain ---" << std::endl;
    
    return (0);
}