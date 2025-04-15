/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 09:19:29 by pzau              #+#    #+#             */
/*   Updated: 2025/04/15 09:19:30 by pzau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){}
Contact::~Contact(){}

void Contact::setFirstName(std::string value){this->first_name = value;}
void Contact::setLastName(std::string value){this->last_name = value;}
void Contact::setNickname(std::string value){this->nickname = value;}
void Contact::setPhoneNumber(std::string value){this->phone_number = value;}
void Contact::setDarkSecret(std::string value){this->dark_secret = value;}

std::string Contact::getFirstName() const { return this->first_name; }
std::string Contact::getLastName() const { return this->last_name; }
std::string Contact::getNickName() const { return this->nickname; }
std::string Contact::getPhoneNumber() const { return this->phone_number; }
std::string Contact::getDarkSecret() const { return this->dark_secret; }
