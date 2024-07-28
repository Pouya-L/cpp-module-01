/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 20:59:46 by plashkar          #+#    #+#             */
/*   Updated: 2024/07/27 21:14:44 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {}

HumanB::~HumanB() {}

/**
 * Using a reference for the setWeapon method parameter ensures that the method
 *  receives the actual Weapon object rather than a copy of it.
 * This is important for several reasons:
 *
 * Efficiency: Passing by reference avoids the overhead of copying the Weapon object,
 * which can be expensive if the object is large or complex.
 *
 * Consistency: It ensures that the HumanB object interacts with the same Weapon object
 * that was passed to it, allowing changes to the Weapon to be reflected in HumanB.
 */
void HumanB::setWeapon(Weapon& weapon)
{
	_weapon = &weapon;
}

void	HumanB::attack()
{
	if (_weapon)
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " has no weapon to attack with!" << std::endl;
}
