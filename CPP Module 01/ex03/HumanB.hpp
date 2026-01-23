/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keak <keak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 18:13:35 by keak              #+#    #+#             */
/*   Updated: 2026/01/23 15:12:55 by keak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP_
# define HUMANB_HPP_

# include "Weapon.hpp"

class HumanB
{
	private:
		Weapon* _weapon;
		std::string name; 
	public:
		void attack();
		HumanB(std::string name);
		void setWeapon(Weapon& weapon);
};

#endif
