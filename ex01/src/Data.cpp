/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 21:52:02 by lude-bri          #+#    #+#             */
/*   Updated: 2025/07/14 21:58:52 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Data.hpp"

//Default Constructor
Data::Data() {
	DEBUG_MSG("A Default Constructor of Data was called");
}

//Copy Constructor
Data::Data(const Data &rhs) {
	DEBUG_MSG("A Copy Constructor of Data was called");
	*this = rhs;
}

//Assignment Operator
Data &Data::operator=(const Data &rhs) {
	DEBUG_MSG("An Assignment Operator for Data was called");
	return *this;
}

//Destructor
Data::~Data() {
	DEBUG_MSG("A Destructor for Data was called");
}
