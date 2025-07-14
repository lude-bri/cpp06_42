/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 21:29:58 by lude-bri          #+#    #+#             */
/*   Updated: 2025/07/14 21:55:49 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//LIBRARIES
#include <iostream>

//DEBUG FLAGS
#ifdef DEBUG
# define DEBUG_MSG(x) std::cout << "[DEBUG] : " << x << std::endl;
#else
# define DEBUG_MSG(x)
#endif

//COLORS
# define RED     "\033[31m"
# define GREEN   "\033[32m"
# define YELLOW  "\033[33m"
# define BLUE    "\033[34m"
# define MAGENTA "\033[35m"
# define CYAN    "\033[36m"
# define RESET   "\033[0m"
# define BOLD    "\033[1m"
# define BLINK    "\033[5m" 
# define REVERSE  "\033[7m"

class Data;

class Serializer {

private:
	Serializer();
	Serializer(const Serializer &rhs);
	Serializer &operator=(const Serializer &rhs);
	~Serializer();

public:
	//Takes a pointer and converts it to the unsigned integer type uintptr_t
	static uintptr_t	serialize(Data *ptr);

	//Takes an unsigned integer parameter and converts it to a pointer Data
	static Data	*deserialize(uintptr_t raw);
};
