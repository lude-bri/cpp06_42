/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 21:35:26 by lude-bri          #+#    #+#             */
/*   Updated: 2025/07/14 21:57:07 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

class Data {

public:
	Data();
	Data(const Data &rhs);
	Data &operator=(const Data &rhs);
	~Data();

	std::string data;
};
