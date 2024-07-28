/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 19:41:50 by plashkar          #+#    #+#             */
/*   Updated: 2024/07/27 20:10:31 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * @brief Creates an array of N zombies and sets their name accordingly
 * I used a function from the sstream lib here to add the number to
 * the end of the name of the zombies.
 * @param N number of zombies in the horde
 * @param name The name we would like to give to the zombies.
 * @return *horde, it returns a pointer to the first element of the array of zombies
 */
Zombie* zombieHorde( int N, std::string name )
{
	if (N <= 0)
		return (NULL);
	Zombie* horde = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		std::stringstream ss;
		ss << name << i;
		horde[i].setName(ss.str());
	}
	return horde;
}
