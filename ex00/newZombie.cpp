/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 19:08:20 by plashkar          #+#    #+#             */
/*   Updated: 2024/07/27 19:17:38 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * creates a zombie with the name parameter on the heap and retruns a pointer to it
 * this is like malloc, so it has to be freed later or will cause memory leaks.
 * @param name the name we want to give to the zombie.
 * @return a pointer to that zombie instance class.
 */
Zombie* newZombie( std::string name )
{
	Zombie* zombie =  new Zombie(name);
	return (zombie);
}
