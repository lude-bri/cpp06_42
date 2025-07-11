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
//Verify CHAR Method
//Verify INT Method
//Verify FLOAT Method
//Verify DOUBLE Method
