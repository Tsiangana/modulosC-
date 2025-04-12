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

class PhoneBook {
    private:
        Contact lista[8];
        int index;
    public:
        void search();
        void add();
        PhoneBook();
        ~PhoneBook();
};
