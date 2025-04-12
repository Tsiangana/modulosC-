/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 14:26:26 by pzau              #+#    #+#             */
/*   Updated: 2025/03/25 14:26:27 by pzau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <string>

int main(int ac, char **av)
{
    int i = 1;
    if (ac > 1)
    {
        while (i < ac)
        {
            std::string up = av[i];
            for (int j = 0; up[j] != '\0'; j++)
                std::cout << static_cast<char>(toupper(up[j]));
            i++;
        }
    }
    else std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << "\n"; return (0);
}
