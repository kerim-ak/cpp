/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keak <keak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 20:19:15 by keak              #+#    #+#             */
/*   Updated: 2026/01/25 23:34:44 by keak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	private:
		int					_value;
		static const int	_frac = 8;
	public:
		Fixed();
		Fixed(const Fixed& num);
		Fixed& operator=(const Fixed& num);
		~Fixed();
		
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif