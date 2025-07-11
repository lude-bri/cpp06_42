/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 19:27:31 by lude-bri          #+#    #+#             */
/*   Updated: 2025/07/11 21:12:16 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//LIBRARIES
#include <iostream>
#include <climits>
#include <string>
#include <cstdlib>
#include <cctype>


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

//CLASS
class Converter {

public:

	Converter();
	Converter(const Converter &rhs);
	Converter &operator=(const Converter &rhs);
	~Converter();

	typedef bool (Converter::*MemFun)(const std::string &limits) const;
    
    static const MemFun functions[4];
   
	//Verify Functions
    bool isChar(const std::string &limits) const;
    bool isInt(const std::string &limits) const;
    bool isFloat(const std::string &limits) const;
    bool isDouble(const std::string &limits) const;
	
	//Convert Functions
	void	convertChar(const std::string &limits) const;
	void	convertInt(const std::string &limits) const;
	void	convertFloat(const std::string &limits) const;
	void	convertDouble(const std::string &limits) const;
};
