/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 12:47:18 by pzau              #+#    #+#             */
/*   Updated: 2025/04/10 12:47:20 by pzau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

static void init_program(void)
{
    std::cout << "\n";
    std::cout << " /**************************/" << "\n";
    std::cout << " /                          /" << "\n";
    std::cout << " /    Welcome               /" << "\n";
    std::cout << " /    ADD                   /" << "\n";
    std::cout << " /    SEARCH                /" << "\n";
    std::cout << " /    EXIT                  /" << "\n";
    std::cout << " /                          /" << "\n";
    std::cout << " /**************************/" << "\n\n";
}

static void    sair(void)
{
    std::cout << "\n";
    std::cout << " /**************************/" << "\n";
    std::cout << " /                          /" << "\n";
    std::cout << " /    COMAND DETECT         /" << "\n";
    std::cout << " /    EXITING               /" << "\n";
    std::cout << " /                          /" << "\n";
    std::cout << " /**************************/" << "\n\n";
    exit(0);
}

int main(void)
{
    PhoneBook phone;

    init_program(); std::string valor; 
    std::cout << "phone: ";
    while (true)
    {
        std::getline(std::cin, valor);
        //std::cout << "\033[F\033[K";
        //std::cout << "\033[K";
        if (valor == "ADD")  phone.add();
        else if (valor == "SEARCH") search();
        else if (valor == "EXIT") sair();
        else std::cout << "phone: ";
    }
    return (0);
}
