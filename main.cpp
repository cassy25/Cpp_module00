/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgeoffra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:56:26 by cgeoffra          #+#    #+#             */
/*   Updated: 2023/11/17 10:56:28 by cgeoffra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phoneBook.hpp"
#include <string>
#include <iostream>

int main()
{
    std::string command;
    Contact contact;
    phoneBook phonebook;

    while (1)
    {
        std::cout << "Entrez une commande (ADD, SEARCH, EXIT)" << std::endl;
        getline(std::cin, command);
        if (command == "ADD")
        {
            std::cout << "Vous avez choisi ADD" << std::endl;
            contact.Name();
            contact.LastName();
            contact.NickName();
            contact.PhoneNumber();
            contact.DarkestSecret();
        }
        else if (command == "SEARCH")
        {
            std::cout << "Vous avez choisi SEARCH" << std::endl;
            phonebook.resumeContact();
        }
        else if (command == "EXIT")
        {
            break;
        }
    }
    return 0;
}