/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 17:54:44 by lude-bri          #+#    #+#             */
/*   Updated: 2025/07/10 19:09:08 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

#ifdef DEBUG
# define DEBUG_MSG(x) std::cout << "[DEBUG] : " << x << std::endl;
#else
# define DEBUG_MSG(x)
#endif

class ScalarConverter {

	//will contain only one static method "convert"
	//that will take as a parameter a string representation of a c++ literal
	//in its most common form and output its value in the following series
	//of scalar types
	//char
	//int
	//float
	//double
private:

	ScalarConverter();
	ScalarConverter(const ScalarConverter &rhs);
	ScalarConverter &operator=(const ScalarConverter &rhs);
	~ScalarConverter();

public:
	static void	convert(const std::string literal);
};
