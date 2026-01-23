/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keak <keak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 18:06:26 by keak              #+#    #+#             */
/*   Updated: 2026/01/23 17:55:12 by keak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP_
# define WEAPON_HPP_

# include <string>

class Weapon
{
	private:
		std::string type;
	public:
		Weapon(std::string type);
		std::string getType();
		void setType(std::string type);
};

#endif
