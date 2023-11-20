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
    phoneBook phonebook;

    while (1)
    {
        std::cout << "Entrez une commande (ADD, SEARCH, EXIT)" << std::endl;
        getline(std::cin, command);
        if (command == "ADD")
        {
            std::cout << "Vous avez choisi ADD" << std::endl;
            phonebook.Index();
            phonebook.showIndex();
            phonebook.create();
        }
        else if (command == "SEARCH")
        {
            phonebook.resumeAllContact();
            while (1)
            {
                std::cout << "Entrez l'index de votre contact pour plus d'information ou 0 pour sortir " << std::endl;
                getline(std::cin, phonebook.search);
                if (phonebook.search == "0")
                    break;
                else if (phonebook.search >= "1" || phonebook.search <= "8")
                {  
                    phonebook.resumeContact();
                }       
            }
        }
        else if (command == "EXIT")
        {
            break;
        }
    }
}
