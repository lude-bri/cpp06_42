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
	std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" <<std::endl;

	std::cout << RESET;
}

void	Converter::convertInt(const std::string &limits) const {
	DEBUG_MSG("A convertInt method was called");

	std::cout << YELLOW;

	char *end;
	long value = std::strtol(limits.c_str(), &end, 10);

	if (*end != '\0' || value < INT_MIN || value > INT_MAX) {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
		return ;
	}
		
	int i = static_cast<int>(value);

	if (i >= 0 && i <= 127) {
		if (std::isprint(static_cast<unsigned char>(i)))
			std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
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

	std::cout << RED;

	std::string str = limits;

	if (limits[limits.size() -1] == 'f')
		str = limits.substr(0, limits.size()-1);

	char *end;
	float value = std::strtof(str.c_str(), &end);

	if (*end != '\0') {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
		return ;
	}

	if (value >= 0 && value <= 127) {
		if (std::isprint(static_cast<unsigned char>(value)))
			std::cout << "char: " << static_cast<char>(value) << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
	else
		std::cout << "char: impossible" << std::endl;

	if (value >= static_cast<float>(INT_MIN) && value <= static_cast<float>(INT_MAX))
		std::cout << "int: " << static_cast<int>(value) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;

	std::cout << "float: " << value;
	if (value == static_cast<int>(value))
		std::cout << ".0f" << std::endl;
	std::cout << std::endl;

	std::cout << "double: " << static_cast<double>(value);
	if (value == static_cast<int>(value))
		std::cout << ".0" << std::endl;
	std::cout << std::endl;

	std::cout << RESET;
}

void	Converter::convertDouble(const std::string &limits) const {
	DEBUG_MSG("A convertDouble method was called");

	std::cout << BLUE;

	char *end;
	double value = std::strtod(limits.c_str(), &end);

	if (*end != '\0') {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
		return ;
	}
	
	if (value >= 0 && value <= 127) {
		if (std::isprint(static_cast<unsigned char>(value)))
			std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
	else
		std::cout << "char: impossible" << std::endl;

	if (value >= static_cast<double>(INT_MIN) && value <= static_cast<double>(INT_MAX))
		std::cout << "int: " << static_cast<int>(value) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;

	std::cout << "float: " << static_cast<float>(value);
	if (value == static_cast<int>(value))
		std::cout << ".0" << std::endl;
	std::cout << "f" << std::endl;

	std::cout << "double: " << value;
	if (value == static_cast<int>(value))
		std::cout << ".0" << std::endl;
	std::cout << std::endl;

}
