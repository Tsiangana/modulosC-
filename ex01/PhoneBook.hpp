/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 12:47:57 by pzau              #+#    #+#             */
/*   Updated: 2025/04/10 12:47:58 by pzau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstring>
#include <string>
#include <cstdlib>
#include <limits>
#include "Contact.hpp"
#include <sstream>

class PhoneBook {
    private:
        Contact lista[8];
        int index;
        int on;
    public:
        void search();
        void add();
        void printTable();
        PhoneBook();
        ~PhoneBook();
};
