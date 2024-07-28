/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 14:10:10 by plashkar          #+#    #+#             */
/*   Updated: 2024/07/28 15:16:45 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	displayBanner();
	std::string	input;
	Harl harl;
	while (true)
	{
		std::cout << BLUE << "> " << RESET;
		std::getline(std::cin, input);
		if (std::cin.eof() || std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			if (std::cin.eof())
			{
				std::cout << RED << "EOF detected, exitting the program"
							<< RESET << std::endl;
				break ;
			}
			std::cout << "Invalid input; please try again." << std::endl;
			continue ;
		}
		if (input == "EXIT")
			break ;
		harl.complain(input);
	}
	return (0);
}
