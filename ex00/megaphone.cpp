/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccompote <ccompote@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 14:30:04 by ccompote          #+#    #+#             */
/*   Updated: 2023/05/28 16:10:09 by ccompote         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"<< std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
		{
			for (int j = 0; j < (int)std::strlen(argv[i]); j++)
			{
				if (std::isalpha(argv[i][j]))
					argv[i][j] = std::toupper(argv[i][j]);
			}		
			std::cout << argv[i];
		}
		std::cout << std::endl;
	}
	return (0);
} 