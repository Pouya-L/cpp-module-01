/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 14:12:02 by plashkar          #+#    #+#             */
/*   Updated: 2024/07/28 15:23:14 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

/**
 * In C++, the & operator is used to obtain the address of a function, necessary when storing function pointers.
 * In this case, functions is an array of pointers to member functions of the Harl class.
 * To initialize this array, we need to assign the addresses of the member functions to the array elements.
 */
Harl::Harl ()
{
	levels[0] = "debug";
	levels[1] = "info";
	levels[2] = "warning";
	levels[3] = "error";

	functions[0] = &Harl::debug;
	functions[1] = &Harl::info;
	functions[2] = &Harl::warning;
	functions[3] = &Harl::error;
}

Harl::~Harl () {}

void Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-"
				"pickle-specialketchup burger. I really do!"
				<< std::endl;
}

void Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You "
				"didnt put enough bacon in my burger! If you did, I wouldnt be asking for more!"
				<< std::endl;
}

void Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. Ive been "
				"coming for years whereas you started working here since last month."
				<< std::endl;

}

void Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now."
				<< std::endl;
}

void Harl::complain( std::string level )
{
	for(int i = 0; i < _numLevels ; i++)
	{
		if (levels[i] == level)
		{
			(this->*functions[i])();
			return ;
		}
	}
	std::cout << RED << "Error - Unknown level: " << level << RESET << std::endl
				<< "The level should be one of the following: "
				<< "[debug] [info] [warning] [error]" << std::endl;
}

void	displayBanner( void )
{
	std::cout << BOLDCYAN << "┌─────────────────────────────────────┐" << std::endl
				<< "  Welcome to Harl 1.0 " << std::endl
				<< BLUE << "  where you get to hear Harl complain " << std::endl
				<< BOLDCYAN << "└─────────────────────────────────────┘" << RESET << std::endl;

	std::cout << "Please select in a level" << std::endl
				<< "[debug] [info] [warning] [error]" << std::endl
				<< "To exit the program type in EXIT" << std::endl;
}
