/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 19:27:31 by lude-bri          #+#    #+#             */
/*   Updated: 2025/07/10 19:48:31 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

// #include "ScalarConverter.hpp"
#include <iostream>

#ifdef DEBUG
# define DEBUG_MSG(x) std::cout << "[DEBUG] : " << x << std::endl;
#else
# define DEBUG_MSG(x)
#endif

class Converter {

public:

	Converter();
	Converter(const Converter &rhs);
	Converter &operator=(const Converter &rhs);
	~Converter();

	typedef bool (Converter::*MemFun)(const std::string &name) const;

	static const MemFun functions[3];

	bool	isChar(const std::string &limits);
	bool	isInt(const std::string &limits);
	bool	isFloat(const std::string &limits);
	bool	isDouble(const std::string &limits);
};
