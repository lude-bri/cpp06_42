/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 17:58:46 by lude-bri          #+#    #+#             */
/*   Updated: 2025/07/10 18:17:49 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScalarConverter.hpp"

void	printHelp() {
	std::cout << CYAN << "This is the Converter Machine!" << std::endl;
	std::cout << "Usage: ./convert <target_to_convert>\n";
	std::cout << GREEN << "GREEN -> Means that the target is a Character" << std::endl;
	std::cout << YELLOW << "YELLOW -> Means that the target is an Integer" << std::endl;
	std::cout << RED << "RED -> Means that the target is a Float" << std::endl;
	std::cout << BLUE << "BLUE -> Means that the target is a Double" << std::endl;
}

int main (int ac, char **av) {

	if (ac == 2) {
		
		std::string str = av[1];

		if (str.compare("help") == 0)
			printHelp();
		else
			ScalarConverter::convert(av[1]);
	}
	else
		std::cerr << "Error: try <program> <target_to_convert> or type help" << std::endl;
}
