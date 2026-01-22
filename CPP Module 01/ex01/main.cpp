/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keak <keak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 15:43:19 by keak              #+#    #+#             */
/*   Updated: 2026/01/22 18:38:10 by keak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main()
{
	Zombie* horde = zombieHorde(15, "Will Byers");
	
	int i = -1;
	while (++i < 15)
		horde[i].announce();
	delete[] horde;
	return (0);
}
