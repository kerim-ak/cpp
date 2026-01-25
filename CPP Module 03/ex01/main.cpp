/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keak <keak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 20:02:55 by keak              #+#    #+#             */
/*   Updated: 2026/01/25 22:25:50 by keak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

int main(void)
{
    std::cout << "--- TEST 1: Construction Chaining ---" << std::endl;
    ScavTrap serena("Serena");

    std::cout << "\n--- TEST 2: Validating Stats ---" << std::endl;
    serena.attack("Handsome Jack");

    std::cout << "\n--- TEST 3: New Special Ability ---" << std::endl;
    serena.guardGate();

    std::cout << "\n--- TEST 4: Comparison with Original ClapTrap ---" << std::endl;
    ClapTrap clap("Clappy");
    
    std::cout << ">> Calling ScavTrap Attack:" << std::endl;
    serena.attack("Target A");
    
    std::cout << ">> Calling ClapTrap Attack:" << std::endl;
    clap.attack("Target B");

    std::cout << "\n--- TEST 5: Destruction Chaining ---" << std::endl;
    return (0);
}
