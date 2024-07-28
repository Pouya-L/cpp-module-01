/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 19:10:59 by plashkar          #+#    #+#             */
/*   Updated: 2024/07/27 19:15:56 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * Creates a zombie with the input name on the stack,
 * however as soon the function scope is over it will be destroyed
 * @param name the name we want to give to the zombie.
 * @return void
 */
void randomChump( std::string name )
{
	Zombie stackZombie(name);

	stackZombie.announce();
}
