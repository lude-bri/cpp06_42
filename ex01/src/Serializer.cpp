/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 21:46:43 by lude-bri          #+#    #+#             */
/*   Updated: 2025/07/14 22:07:15 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Serializer.hpp"

//Default Constructor
Serializer::Serializer() {
	DEBUG_MSG("A Default Constructor of Serializer was called");
}

//Copy Constructor
Serializer::Serializer(const Serializer &rhs) {
	DEBUG_MSG("A Copy Constructor of Serializer was called");
	*this = rhs;
}

//Assignment Operator
Serializer &Serializer::operator=(const Serializer &rhs) {
	DEBUG_MSG("An Assignment Operator for Serializer was called");
	return *this;
}

//Destructor
Serializer::~Serializer() {
	DEBUG_MSG("A Destructor for Serializer was called");
}

//Takes a pointer and converts it to the unsigned integer type uintptr_t
uintptr_t	Serializer::serialize(Data *ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

//Takes an unsigned integer parameter and converts it to a pointer Data
Data	*Serializer::deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}
