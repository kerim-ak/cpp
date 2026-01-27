/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keak <keak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 23:40:15 by keak              #+#    #+#             */
/*   Updated: 2026/01/27 17:46:08 by keak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    std::cout << "--- TEST 1: The Subject Array ---" << std::endl;
    const int count = 4;
    Animal* animals[4];

    for (int i = 0; i < count / 2; i++)
	{
        animals[i] = new Dog();
		std::cout << std::endl;
	}
    for (int i = count / 2; i < count; i++)
	{
        animals[i] = new Cat();
		std::cout << std::endl;
	}
    std::cout << "\n--- Deleting the array ---" << std::endl;
    for (int i = 0; i < count; i++)
	{
        delete (animals[i]);
		std::cout << std::endl;
	}

    std::cout << "\n--- TEST 2: Deep Copy ---" << std::endl;
    Dog* karabas = new Dog();
    karabas->getBrain()->setIdea(0, "I love bones");

	std::cout << std::endl;

    Dog* copy = new Dog(*karabas);
	std::cout << std::endl;
    std::cout << "Copy's idea: " << copy->getBrain()->getIdea(0) << std::endl;

    std::cout << "\n---Changing Karabas' idea---" << std::endl;
    karabas->getBrain()->setIdea(0, "I hate cats");

    std::cout << "Karabas' idea: " << karabas->getBrain()->getIdea(0) << std::endl;
    std::cout << "Copy's idea: " << copy->getBrain()->getIdea(0) << std::endl;
	std::cout << std::endl;

    delete (karabas);
    delete (copy);

    return 0;
}