/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keak <keak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 00:06:37 by keak              #+#    #+#             */
/*   Updated: 2026/01/22 18:52:02 by keak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class	Zombie
{
	private:
		std::string	_name;
	public:
		void	announce(void);
				~Zombie();
				Zombie(std::string name);
};

void	randomChump(std::string name);
		Zombie*	newZombie(std::string name);

#endif
