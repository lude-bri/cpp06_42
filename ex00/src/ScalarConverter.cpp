/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 18:19:19 by lude-bri          #+#    #+#             */
/*   Updated: 2025/07/10 19:22:12 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScalarConverter.hpp"

//Default Constructor
ScalarConverter::ScalarConverter() {
	DEBUG_MSG("A Default ScalarConverter Constructor was called");
}

//Copy Constructor
ScalarConverter::ScalarConverter(const ScalarConverter &rhs) {
	DEBUG_MSG("A ScalarConverter Copy Constructor was called");
}

//Copy Assignment Operator
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &rhs) {
	DEBUG_MSG("A ScalarConverter Copy Assignment Operator was called");
	return *this;
}

//Default Destructor
ScalarConverter::~ScalarConverter() {
	DEBUG_MSG("A ScalarConverter Destructor was called");
}

void	ScalarConverter::convert(const std::string literal) {
	std::cout << literal << std::endl;

	//first detect the type of the literal passed as a parameter
	//converts from string to it's actual type
	//then convert it EXPLICITLY to the three other data types
	
	//1. preciso verificar se um char es um char
	//2. preciso verificar se um char es um int
	//3. preciso verificar se um char es um float
	//4. preciso verificar se um char es um double
	//
	//
	//vou fazer um pointer to member function para descobrir, uma vez que ja sei
	//vou converter atraves de um switch case
}
