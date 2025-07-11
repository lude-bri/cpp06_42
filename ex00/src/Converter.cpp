/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 19:51:28 by lude-bri          #+#    #+#             */
/*   Updated: 2025/07/10 19:52:10 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Converter.hpp"

//Default Constructor
Converter::Converter() {
	DEBUG_MSG("A Default Converter Constructor was called");
}

//Copy Constructor
Converter::Converter(const Converter &rhs) {
	DEBUG_MSG("A Copy Converter Constructor was called");
}

//Operator Assignment
Converter &Converter::operator=(const Converter &rhs) {
	DEBUG_MSG("An Operator Assignment for Converter was called");
	return *this;
}

//Destructor
Converter::~Converter() {
	DEBUG_MSG("A Default Converter Destructor was called");
}

//Pointer to Member Function
const Converter::MemFun Converter::functions[4] = {
	&Converter::isChar,
	&Converter::isInt,
	&Converter::isFloat,
	&Converter::isDouble
};

//Verify CHAR Method
bool Converter::isChar(const std::string &limits) const {
	DEBUG_MSG("A isChar Method was called");

	return limits.length() == 1 && !std::isdigit(limits[0]);
}

//Verify INT Method
bool Converter::isInt(const std::string &limits) const { 
	DEBUG_MSG("A isInt Method was called");

	char *end;

	errno = 0;
	long val = std::strtol(limits.c_str(), &end, 10);
	return errno == 0 && *end == '\0' && val >= INT_MIN && val <= INT_MAX;
}

//Verify FLOAT Method
bool Converter::isFloat(const std::string &limits) const { 
	DEBUG_MSG("A isFloat Method was called");

	if (limits == "nanf" || limits == "+inff" || limits == "-inff")
		return true;
	
	if (limits.empty() || limits[limits.size() - 1] != 'f') 
		return false;
	
	std::string sub = limits.substr(0, limits.size() -1);

	char *end;
	errno = 0;
	std::strtod(sub.c_str(), &end);
	return errno == 0 && *end == '\0'; 
}

//Verify DOUBLE Method
bool Converter::isDouble(const std::string &limits) const { 
	DEBUG_MSG("A isDouble Method was called");

	return false;
}

