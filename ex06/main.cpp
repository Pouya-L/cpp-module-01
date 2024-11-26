/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 15:50:15 by plashkar          #+#    #+#             */
/*   Updated: 2024/11/26 11:46:02 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 2) {
		std::cout << RED << "Error: Wrong number of arguments" << RESET << std::endl
					<< "USAGE: ./harlFilter <level>" << std::endl
					<< "The level should be one of the following: "
					<< "[ DEBUG ] [ INFO ] [ WARNINIG ] [ ERROR ]" << std::endl;
					return (1);
	}
	else {
	Harl harl;
	harl.complain(argv[1]);
	return (0);
	}
}

