/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 17:58:46 by lude-bri          #+#    #+#             */
/*   Updated: 2025/07/10 18:17:49 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScalarConverter.hpp"

int main (int ac, char **av) {

	if (ac == 2)
		ScalarConverter::convert(av[1]);
	else
		std::cerr << "Error: try <program> <target_to_convert>" << std::endl;
}
