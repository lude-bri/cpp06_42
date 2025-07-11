/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 17:54:44 by lude-bri          #+#    #+#             */
/*   Updated: 2025/07/10 19:35:14 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Converter.hpp"



class ScalarConverter : public Converter {

private:

	ScalarConverter();
	ScalarConverter(const ScalarConverter &rhs);
	ScalarConverter &operator=(const ScalarConverter &rhs);
	~ScalarConverter();

public:
	static void	convert(const std::string literal);

};
