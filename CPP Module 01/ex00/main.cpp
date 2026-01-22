/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keak <keak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 04:25:03 by keak              #+#    #+#             */
/*   Updated: 2026/01/22 18:38:02 by keak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main()
{
	Zombie *heapZombie = newZombie("HeapZombie");
	randomChump("stackZombie");
	heapZombie->announce();
	delete(heapZombie);
	return (0);
}
