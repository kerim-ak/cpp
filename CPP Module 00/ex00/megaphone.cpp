/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keak <keak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:30:54 by keak              #+#    #+#             */
/*   Updated: 2026/01/19 18:01:50 by keak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		int i = 1;
		int j = 0;
		while (i < argc)
		{
			j = 0;
			while (argv[i][j])
			{
				std::cout << static_cast<char>(toupper(argv[i][j]));
				j++;
			}
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}
