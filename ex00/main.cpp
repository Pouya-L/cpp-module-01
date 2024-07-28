/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 19:18:01 by plashkar          #+#    #+#             */
/*   Updated: 2024/07/27 19:27:31 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	std::cout << "creating zombies on the stack memory" << std::endl;
	Zombie zombie1("Bob");
	Zombie zombie2("Patrick");
	Zombie zombie3;
	randomChump("Random chumbucket");
	zombie1.announce();
	zombie2.announce();
	zombie3.announce();


	std::cout << "\ncreating the zombies on the heap" << std::endl;
	Zombie* hZombie1;
	hZombie1 = newZombie("Mr.crabs");
	hZombie1->announce();
	delete(hZombie1);

	return(0);
}
