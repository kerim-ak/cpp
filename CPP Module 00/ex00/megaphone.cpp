/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keak <keak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:30:54 by keak              #+#    #+#             */
/*   Updated: 2025/10/14 14:58:31 by keak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		int i = 1;
		int j = 0;
		int str_len = 0;
		while (i < argc)
		{
			j = 0;
			str_len = (int)strlen(argv[i]);
			while (j < str_len)
			{
				std::cout << (char)toupper(argv[i][j]) << std::flush;
				j++;
			}
			i++;
		}
		std::cout << "" << std::endl;
	}
	return (0);
}