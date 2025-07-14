/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 22:30:02 by lude-bri          #+#    #+#             */
/*   Updated: 2025/07/14 22:42:21 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

# define RED     "\033[31m"
# define GREEN   "\033[32m"
# define YELLOW  "\033[33m"
# define RESET   "\033[0m"


class Base {

public:
	virtual ~Base();

	//randomly instantiates A,B or C and returns the instance as a Base pointer
	static Base *generate();

	//it prints the actual type of the object pointed by p: "A", "B" or "C"
	static void identify(Base *p);

	//It prints the actual type of the object referenced by p: "A", "C" or "C"
	static void identify(Base &p);
};

class A : public Base {};
class B : public Base {};
class C : public Base {};
