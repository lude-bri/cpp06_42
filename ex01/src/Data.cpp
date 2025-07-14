/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 21:52:02 by lude-bri          #+#    #+#             */
/*   Updated: 2025/07/14 22:09:59 by lude-bri         ###   ########.fr       */
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

std::ostream &operator<<(std::ostream &out, const Data &data) {
	out << CYAN << "Your Favourite List: " << std::endl;
	out << "Favourite Film: " << data.favouriteFilm << std::endl;
	out << "Favourite Song: " << data.favouriteSong << std::endl;
	out << "Favourite Artist: " << data.favouriteArtist << std::endl;
	out << "Favourite Book: " << data.favouriteBook << std::endl;

	return out;
}
