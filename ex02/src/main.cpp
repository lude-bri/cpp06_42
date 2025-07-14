/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 22:47:55 by lude-bri          #+#    #+#             */
/*   Updated: 2025/07/14 22:55:28 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Base.hpp"

int main (void) {
	Base *p = Base::generate();

	std::cout << "Identify by pointer: " << std::endl;
	Base::identify(p);
	std::cout << "Identify by reference " << std::endl;
	Base::identify(*p);
	delete p;
}
