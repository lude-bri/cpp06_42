/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 22:35:58 by lude-bri          #+#    #+#             */
/*   Updated: 2025/07/14 22:52:03 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Base.hpp"
#include <ctime>
#include <cstdlib>

//Destructor
Base::~Base() {}

//randomly instantiates A,B or C and returns the instance as a Base pointer
Base *Base::generate() {

	std::srand(static_cast<unsigned int>(std::time(NULL)));

	int value = std::rand()%3;
	switch (value) {
		case 0:
			std::cout << GREEN << "Generated A" << RESET << std::endl;
			return new A;
		case 1:
			std::cout << YELLOW << "Generated B" << RESET << std::endl;
			return new B;
		case 2:
			std::cout << RED << "Generated C" << RESET << std::endl;
			return new C;
	}
	return 0;
}

//it prints the actual type of the object pointed by p: "A", "B" or "C"
void Base::identify(Base *p) {
	if (dynamic_cast<A *>(p))
		std::cout << GREEN << "A" << RESET << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << YELLOW << "B" << RESET << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << RED << "C" << RESET << std::endl;
}

//It prints the actual type of the object referenced by p: "A", "C" or "C"
void Base::identify(Base &p) {

	try {
		(void)dynamic_cast<A &>(p);
		std::cout << GREEN << "A" << RESET << std::endl;
	} catch (std::exception &e) {}
	
	try {
		(void)dynamic_cast<B &>(p);
		std::cout << YELLOW <<"B" << RESET << std::endl;
	} catch (std::exception &e) {}
	try {
		(void)dynamic_cast<C &>(p);
		std::cout << RED << "C" << RESET << std::endl;
	} catch (std::exception &e) {}
}

