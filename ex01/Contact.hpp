/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 08:40:33 by pzau              #+#    #+#             */
/*   Updated: 2025/04/11 08:40:35 by pzau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstring>
#include <string>
#include <cstdlib>
#include <limits>
#include <csignal>

class Contact {
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string dark_secret;
    public:
        Contact();
        ~Contact();
        void setFirstName(std::string value);
        void setLastName(std::string value);
        void setNickname(std::string value);
        void setPhoneNumber(std::string value);
        void setDarkSecret(std::string value);
        std::string getFirstName() const;
        std::string getLastName() const;
        std::string getNickName() const;
        std::string getPhoneNumber() const;
        std::string getDarkSecret() const;
};
