/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keak <keak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 23:40:15 by keak              #+#    #+#             */
/*   Updated: 2026/01/27 18:00:22 by keak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); // will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete (i);
	delete (j);
	delete (meta);

	const WrongAnimal *metaWrong = new WrongAnimal();
	const WrongAnimal *iWrong = new WrongCat();
	
	std::cout << i->getType() << " " << std::endl;
	iWrong->makeSound();
	metaWrong->makeSound();

	delete (iWrong);
	delete (metaWrong);
	return (0);
}