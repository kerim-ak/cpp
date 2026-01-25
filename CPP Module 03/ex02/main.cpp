/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keak <keak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 20:02:55 by keak              #+#    #+#             */
/*   Updated: 2026/01/25 22:25:22 by keak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

int main(void)
{
    std::cout << "--- TEST 1: Construction Chain ---" << std::endl;
    FragTrap frag("Grenade");

    std::cout << "\n--- TEST 2: Special Ability (High Fives) ---" << std::endl;
    frag.highFivesGuys();

    std::cout << "\n--- TEST 3: Attack Damage Verification ---" << std::endl;
    frag.attack("Target Dummy");

    std::cout << "\n--- TEST 4: Stats Verification (Energy) ---" << std::endl;
    frag.attack("Target Dummy 2");
    frag.attack("Target Dummy 3");

    std::cout << "\n--- TEST 5: Damage & Repair ---" << std::endl;
    frag.takeDamage(50);
    frag.beRepaired(20);

    std::cout << "\n--- TEST 6: Destruction Chain ---" << std::endl;    
    return (0);
}
