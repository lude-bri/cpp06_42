/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 18:19:19 by lude-bri          #+#    #+#             */
/*   Updated: 2025/07/11 21:13:40 by lude-bri         ###   ########.fr       */
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

static int	verifyType(const std::string &literal) {

	DEBUG_MSG("A convert method was called");

	Converter check;

	if (check.isChar(literal) == true )
		return 0;
	else if (check.isInt(literal) == true)
		return 1;
	else if (check.isFloat(literal) == true)
		return 2;
	else if (check.isDouble(literal) == true)
		return 3;
	else
		return -1;

}

void	ScalarConverter::convert(const std::string literal) {
	DEBUG_MSG("A convert method was called");

	int	result = verifyType(literal);
	Converter c;

	switch (result) {
		case 0:
			c.convertChar(literal);
			break;
		case 1:
			c.convertInt(literal);
			break;
		case 2:
			c.convertFloat(literal);
			std::cout << literal << " is a float" << std::endl;
			break;
		case 3:
			c.convertDouble(literal);
			std::cout << literal << " is a double" << std::endl;
			break;
		default:
			std::cout << literal << " is not valid" << std::endl;
			break;
	}
}

