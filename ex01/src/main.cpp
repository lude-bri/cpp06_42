/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lude-bri <lude-bri@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 21:29:34 by lude-bri          #+#    #+#             */
/*   Updated: 2025/07/14 22:06:18 by lude-bri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Serializer.hpp"
#include "../inc/Data.hpp"

int main(void) {
    
	Data data;
    std::string input;

    std::cout << BOLD << BLUE << "This is your Favourite List!" << RESET << std::endl;
    std::cout << "Tell me your favourite Film, Song, Artist and Book!" << std::endl;

    // Favourite Film
    while (true) {
        std::cout << "Favourite Film: ";
        if (!std::getline(std::cin, input))
			return 1;
        if (input.empty()) {
            std::cout << RED << "Error: cannot be empty" << RESET << std::endl;
            continue;
        }
        data.favouriteFilm = input;
        break;
    }

    // Favourite Song
    while (true) {
        std::cout << "Favourite Song: ";
        if (!std::getline(std::cin, input))
			return 1;
        if (input.empty()) {
            std::cout << RED << "Error: cannot be empty" << RESET << std::endl;
            continue;
        }
        data.favouriteSong = input;
        break;
    }

    // Favourite Artist
    while (true) {
        std::cout << "Favourite Artist: ";
        if (!std::getline(std::cin, input)) 
			return 1;
        if (input.empty()) {
            std::cout << RED << "Error: cannot be empty" << RESET << std::endl;
            continue;
        }
        data.favouriteArtist = input;
        break;
    }

    // Favourite Book
    while (true) {
        std::cout << "Favourite Book: ";
        if (!std::getline(std::cin, input)) 
			return 1;
        if (input.empty()) {
            std::cout << RED << "Error: cannot be empty" << RESET << std::endl;
            continue;
        }
        data.favouriteBook = input;
        break;
    }

    // Serialize and deserialize
    uintptr_t raw = Serializer::serialize(&data);
    Data *deserializedData = Serializer::deserialize(raw);

    std::cout << std::endl << BOLD << "Here is what you told me:" << RESET << std::endl;
    std::cout << *deserializedData;

    return 0;
}
