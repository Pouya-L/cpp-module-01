/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 15:50:31 by plashkar          #+#    #+#             */
/*   Updated: 2024/07/28 16:48:58 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
	levels[0] = "DEBUG";
	levels[1] = "INFO";
	levels[2] = "WARNING";
	levels[3] = "ERROR";
}

Harl::~Harl() {}

void	Harl::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl
				<< "I love having extra bacon for my 7XL-double-cheese-triple-"
				"pickle-specialketchup burger. I really do!"
				<< std::endl << std::endl;
}

void	Harl::info( void )
{
	std::cout << "[ INFO ]" << std::endl
				<< "I cannot believe adding extra bacon costs more money. You "
				"didnt put enough bacon in my burger! If you did, I wouldnt be asking for more!"
				<< std::endl << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl
	 			<< "I think I deserve to have some extra bacon for free. Ive been "
				"coming for years whereas you started working here since last month."
				<< std::endl << std::endl;
}

void	Harl::error( void )
{
	std::cout << "[ ERROR ]" << std::endl
				<< "This is unacceptable! I want to speak to the manager now."
				<< std::endl << std::endl;
}

/**
 * we need the commented line // fall through to supress the compiler warnings
 */
void	Harl::complain(std::string level)
{
	int levelCase = -1;

	for (int i = 0; i < _numLevels; i++)
	{
		if (levels[i] == level)
		{
			levelCase = i;
			break ;
		}
	}
	switch (levelCase)
	{
	case 0:
		this->debug();
		// fall through
	case 1:
		this->info();
		// fall through
	case 2:
		this->warning();
		// fall through
	case 3:
		this->error();
		break ;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break ;
	}
}

