/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 23:36:00 by plashkar          #+#    #+#             */
/*   Updated: 2024/07/28 00:36:12 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mysed.hpp"



int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << RED <<"Incorrect number of arguments" << RESET << std::endl
					<< "Usage: ./mysed <filename> <str_to_find> <str_to_replace_with>"
					<< std::endl;
		return (1);
	}
	return (findAndReplace(argv[1], argv[2], argv[3]));
}

