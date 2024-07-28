/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 18:47:25 by plashkar          #+#    #+#             */
/*   Updated: 2024/07/27 19:03:00 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
#include <string>

class Zombie {
private:
	std::string name;

public:
	Zombie(std::string name);	// Parameterized constructor
	Zombie();					// Default constructor
	~Zombie();
	void	announce(void);
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );


