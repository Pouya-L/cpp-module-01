/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mysed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plashkar <plashkar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 00:33:15 by plashkar          #+#    #+#             */
/*   Updated: 2024/11/26 11:11:08 by plashkar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mysed.hpp"

bool	isFileEmpty(std::ifstream& file)
{
	int	nextChar = file.peek();

	if (nextChar == std::ifstream::traits_type::eof())
		return (true);
	else
		return (false);
}

/**
 * std::string::find(target) will find the first occurance of the word,
 * and return the position at the beginning.
 * std::string::insert(pos, length) will deleted length number of characters after the pos.
 * std::string::npos is a constant static member of the std::string class in C++.
 * It represents a value that is returned when a search operation (such as find) fails
 * to locate the desired substring.
 * @brief it reads the whole file into a string and then loops through it
 * replacing any occurances of the target string with the replacement
 * since it reads the whole file at the beggning its not recommended with huge files.
 * @param inputfile a refrence to the ifstream input file
 * @param outputfile a refrence to the ofstream output file
 * @param target a refrence to the string that we want to replace
 * @param replacement a refrence to the string that will replace the target
 * @return void
 */
void	replaceContent(std::ifstream& inputfile, std::ofstream& outputfile, \
		const std::string &target, const std::string &replacement)
{
	std::string content;
	if (std::getline(inputfile, content, '\0')) {
		size_t pos = content.find(target);
		while (pos != std::string::npos ){
			content.erase(pos, target.length());
			content.insert(pos, replacement);
			pos = content.find(target);
		}
		outputfile << content;
	}
}



int		findAndReplace(char* fileName, char* strToFind, char* strToReplace)
{
	std::ifstream inputfile(fileName);
	if (!inputfile.is_open()) {
		std::cerr << RED << "Error opening the file: " << fileName << RESET << std::endl;
		return (1);
	}

	if (isFileEmpty(inputfile) == true)
	{
		std::cerr << RED << "Error " << fileName << " is empty" << RESET << std::endl;
		return (1);
	}

	std::string newFileName = std::string(fileName) + ".replace";
	std::ofstream outputfile(newFileName.c_str());
	if (!outputfile.is_open()) {
		std::cerr << RED << "Error creating the file: " << newFileName << RESET << std::endl;
		return (1);
	}

	std::string target = strToFind;
	std::string replacement = strToReplace;
	replaceContent(inputfile, outputfile, target, replacement);
	outputfile.close();
	inputfile.close();
	return (0);
}
