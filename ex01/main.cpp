/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 19:52:11 by plashkar          #+#    #+#             */
/*   Updated: 2024/07/27 20:04:57 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


/**
 * Allocation with new[]: When you allocate an array of objects using new[],
 * the runtime allocates extra memory to store the size of the array.
 * This size information is typically stored just before the first element of the array.
 *
 * Deallocation with delete[]: When you call delete[], the runtime uses
 * the stored size information to determine how many destructors need to be
 * called and how much memory needs to be freed.
 */
int main(void)
{
	int	N = 5;
	std::cout << "creating a horde of zombies" << std::endl;
	Zombie* horde = zombieHorde(N, "John Doe ");

	std::cout << "Roll call!" << std::endl;
	for (int i = 0; i < N; i++)
	{
		horde[i].announce();
	}

	std::cout << "Oops, someone left the gas oven on... 💥💥💥" << std::endl;
	delete[] horde;

	return (0);
}
