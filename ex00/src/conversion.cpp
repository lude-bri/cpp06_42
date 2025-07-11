/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 20:28:41 by lude-bri          #+#    #+#             */
/*   Updated: 2025/07/11 21:08:41 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Converter.hpp"

void	Converter::convertChar(const std::string &limits) const {
	DEBUG_MSG("A convertChar method was called");

	std::cout << GREEN;

	//Verify if everything is valid
	if (limits.length() != 1) {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
		return;
	}

	char c = limits[0];
	
	//verify if printable 
	if (std::isprint(static_cast<unsigned char>(c)))
		std::cout << "char: '" << c << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;

	std::cout << RESET;
}

void	Converter::convertInt(const std::string &limits) const {
	DEBUG_MSG("A convertInt method was called");

	std::cout << YELLOW;

	char *end;
	long value = std::strtol(limits.c_str(), &end, 10);

	int i = static_cast<int>(value);

	if (i >= 0 && i <= 127) {
		if (std::isprint(static_cast<unsigned char>(i)))
			std::cout << "char: " << static_cast<char>(i) << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
	else
		std::cout << "char: impossible" << std::endl;

	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
}

void	Converter::convertFloat(const std::string &limits) const {
	DEBUG_MSG("A convertFloat method was called");

}

void	Converter::convertDouble(const std::string &limits) const {
	DEBUG_MSG("A convertDouble method was called");

}
