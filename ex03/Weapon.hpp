/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 20:23:02 by plashkar          #+#    #+#             */
/*   Updated: 2024/07/27 21:13:14 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iomanip>
#include <iostream>

class Weapon {
private:
	std::string _type;
public:
	Weapon(std::string type);
	Weapon();
	~Weapon();
	const std::string&	getType() const;
	void	setType(std::string new_type);
};

#endif
