/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 18:19:19 by lude-bri          #+#    #+#             */
/*   Updated: 2025/07/10 18:34:32 by lude-bri         ###   ########.fr       */
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

