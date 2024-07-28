/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 20:26:49 by plashkar          #+#    #+#             */
/*   Updated: 2024/07/27 20:59:20 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {}

Weapon::Weapon() : _type("Unknown type") {}

Weapon::~Weapon() {}

const std::string&	Weapon::getType() const
{
	return(_type);
}

void	Weapon::setType(std::string new_type)
{
	_type = new_type;
}
