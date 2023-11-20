/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgeoffra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:56:09 by cgeoffra          #+#    #+#             */
/*   Updated: 2023/11/17 10:56:10 by cgeoffra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "contact.hpp"

Contact::Contact()
{
	return ;
}

Contact::~Contact()
{
	return ;
}

//A function that returns the information entered by the user 
std::string    Contact::info(std::string str)
{
    std::string info;
    std::cout << str;
    getline(std::cin, info);
    return (info);
}

//A function that saves information entered by the user
void    Contact::saveInfo()
{
    _name = info("Entrez le prenom : ");
    _lastName = info("Entrez le nom de famille : ");
    _nickname = info("Entrez le surnom : ");
    _phoneNumber = info("Entrez le numero de telephone : ");
    _darkestSecret = info("Entrez le plus lourd secret : ");
}

//A function that displays contact information
void Contact::afficherContact()
{
    std::cout << "Prenom : " << _name << " | ";
    std::cout << "Nom de famille : " << _lastName << " | ";
    std::cout << "Surnom : " << _nickname << " | ";
    std::cout << "Numero de telephone : " << _phoneNumber << " | ";
}

//A function that displays the secret for more information
void Contact::afficherSecret()
{
    std::cout << "Secret : " << _darkestSecret << std::endl;
}