/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 20:59:34 by plashkar          #+#    #+#             */
/*   Updated: 2024/07/27 21:16:01 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

/**
 * the weapon here is a pointer to the weapon obkject because HumanB can have
 * no weapon unlike HumanA that will always be created with a weapon
 */
class HumanB {
private:
	std::string _name;
	Weapon* _weapon;
public:
	HumanB(std::string name);
	~HumanB();
	void setWeapon(Weapon& weapon); // Method to set the weapon
	void attack();
};
