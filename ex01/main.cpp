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
    std::cout << " /                          /" getline<< "\n";
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

void    add()
{
    std::cout << "First Name: " << "\n"; std::getline(std::cin, lista[check].first_name);
    std::cout << "Last Name: " << "\n"; std::getline(std::cin, lista[check].last_name);
    std::cout << "Nickname: " << "\n";  std::getline(std::cin, lista[check].nickname);
    std::cout << "Phone Number: " << "\n"; std::getline(std::cin, lista[check].phone_number);
    std::cout << "Darkest Secret: " << "\n"; std::getline(std::cin, lista[check].dark_secret);
    if (check != 7)
        check++;
}

void    search()
{
    int value;
    if (check == 0) {std::cout << " Nenhum contacto adicionado " << "\n\n"; return ;}
    std::cout << "Digite um contacto de 0 a 7" << "\n\n"; std::cin >> value;
    if (std::cin.fail()){std::cin.clear();std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); std::cout << "Invalid\n"; return ;}
    if (value < 0 || value >= 8) {std::cout << "Contacto inexistente" << "\n"; return ;}
    lista[value].listarDados();
}

int main(void)
{
    init_program(); std::string valor; 
    while (true)
    {
        std::getline(std::cin, valor);
        //std::cout << "\033[F\033[K";
        //std::cout << "\033[K";
        if (valor == "ADD") add();
        else if (valor == "SEARCH") search();
        else if (valor == "EXIT") sair();
        else continue;
    }
    return (0);
}
