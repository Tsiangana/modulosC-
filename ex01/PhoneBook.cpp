/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 08:54:07 by pzau              #+#    #+#             */
/*   Updated: 2025/04/11 08:54:10 by pzau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){this->index = 0; this->on = 0;}
PhoneBook::~PhoneBook(){}

static void handle_sigint(int sig){(void)sig;std::cout << "\nEncerrando\n";std::exit(0);}
static void handle_sigquit(int sig){(void)sig; std::cout << "\nEXITING\n"; exit(0);}

void PhoneBook::add()
{
    std::signal(SIGINT, handle_sigint);
    std::signal(SIGQUIT, handle_sigquit);
    std::string input;

    do {
        std::cout << "First Name: ";
        if (!std::getline(std::cin, input)){std::cout << "\nEXIT\n"; exit(0);}
    }while (input.empty());
    this->lista[this->index].setFirstName(input);

    do {
        std::cout << "Last Name: ";
        if (!std::getline(std::cin, input)){std::cout << "\nEXIT\n"; exit(0);}
    }while (input.empty());
    this->lista[this->index].setLastName(input);

    do {
        std::cout << "Nickname: ";
        if (!std::getline(std::cin, input)){std::cout << "\nEXIT\n"; exit(0);}
    }while (input.empty());
    this->lista[this->index].setNickname(input);

    do {
        std::cout << "Phone Number: ";
        if (!std::getline(std::cin, input)){std::cout << "\nEXIT\n"; exit(0);}
    }while (input.empty());
    this->lista[this->index].setPhoneNumber(input);

    do {
        std::cout << "Dark Secret: ";
        if (!std::getline(std::cin, input)){std::cout << "\nEXIT\n"; exit(0);}
    }while (input.empty());
    this->lista[this->index].setDarkSecret(input);

    this->index = (this->index + 1) % 8;
    this->on = 1;
    std::cout << "\n" << "phone: ";
}

std::string formatField(std::string str)
{
    if (str.length() > 10) {return (str.substr(0, 9) + ".");}
    while (str.length() < 10)
        str = " " + str;
    return (str);
}

void PhoneBook::printTable()
{
    std::cout << "\n";
    std::cout << "---------------------------------------------\n";
    std::cout << "|  Index.  | FirstNam | LastName | Nickname |\n";
    std::cout << "---------------------------------------------\n";
    for (int i = 0; i < 8; ++i)
    {
        if (!this->lista[i].getFirstName().empty())
        {
            std::cout  << "|         " << i << "|"
            << formatField(this->lista[i].getFirstName()) << "|"
            << formatField(this->lista[i].getLastName()) << "|"
            << formatField(this->lista[i].getNickName()) << "|\n";
            std::cout << "---------------------------------------------\n";
        }
    }
    std::cout << "\n";
}

void PhoneBook::search()
{
    std::signal(SIGINT, handle_sigint);
    std::signal(SIGQUIT, handle_sigquit);

    if (this->index == 0 && this->on != 1){std::cout << "\n" << "No Contacts Found.\n"; std::cout << "\n" << "phone: "; return ;}

    this->printTable();

    std::string input;
    int i = -1;
    
    while (true)
    {
        std::cout << "Pass a number between (0 to 7) OR 12 to return:\n";
        if (!std::getline(std::cin, input)){std::cout << "\nEXIT\n"; exit(0);}
        std::stringstream ss(input);
        if (!(ss >> i) || !ss.eof()){std::cout << "Invalid input.\n" << "\n"; continue ;}
        if (i == 12){std::cout << "\n" << "phone: "; return ;}
        if (i < 0 || i > 7 || this->lista[i].getFirstName().empty()){std::cout << "\n";continue ;}
        break ;
    }

    std::cout << "First Name: " << this->lista[i].getFirstName() << "\n";
    std::cout << "Last Name: " << this->lista[i].getLastName() << "\n";
    std::cout << "Nickname: " << this->lista[i].getNickName() << "\n";
    std::cout << "Phone Number: " << this->lista[i].getPhoneNumber() << "\n";
    std::cout << "Dark Secret: " << this->lista[i].getDarkSecret() << "\n";

    std::cout << "\n" << "phone: "; return ;
}
