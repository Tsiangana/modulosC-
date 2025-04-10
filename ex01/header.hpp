/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 12:47:57 by pzau              #+#    #+#             */
/*   Updated: 2025/04/10 12:47:58 by pzau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HPP
#define HEADER_HPP

#include <iostream>
#include <cstring>
#include <string>
#include <cstdlib>
#include <limits>

class listaTell {
    public:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string dark_secret;
    
    void listarDados() {
        std::cout << "First Name: " << first_name;
        std::cout << " | Last Name: " << last_name;
        std::cout << " | Nickname: " << nickname;
        std::cout << " | Phone Number: " << phone_number;
        std::cout << " | Darkest Secret: " << dark_secret;
        std::cout << "\n";
    }
};

int check = 0;
listaTell lista[8];

#endif
