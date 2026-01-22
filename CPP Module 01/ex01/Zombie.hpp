/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keak <keak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 00:06:37 by keak              #+#    #+#             */
/*   Updated: 2026/01/22 15:41:46 by keak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class	Zombie
{
	private:
		std::string	name;
	public:
		void	announce(void);
		void	setName(std::string name);
				Zombie();
				~Zombie();
				Zombie(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif
