/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 19:31:13 by plashkar          #+#    #+#             */
/*   Updated: 2024/07/27 20:01:03 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
#include <string>
#include <sstream>

class	Zombie {
private:
	std::string name;

public:
	Zombie(std::string name);
	Zombie();
	~Zombie();
	void	setName(std::string name);
	void	announce(void);
};

Zombie*	zombieHorde( int N, std::string name );
