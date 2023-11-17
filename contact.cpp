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

}

Contact::~Contact()
{

}


std::string Contact::Name(void)
{
    std::string str;
    std::cout << "Entrez le prenom : ";
    std::cin >> str;
    this->name = str;
    std::cout << this->name << std::endl;
    return (this->name);
}

/* 
std::string    Contact::answer(std::string str)
{
    std::string answer;
    std::cout << str;
    getline(std::cin, answer);
    return (answer);
}

void    Contact::what()
{
    this->name = answer("Entrez un prenom : ");
}*/

std::string Contact::LastName(void)
{
    std::cout << "Entrez le nom de famille : ";
    std::cin >> this->lastName;
    std::cout << this->lastName << std::endl;
    return (this->lastName);
}

std::string Contact::NickName(void)
{
    std::cout << "Entrez le surnom : ";
    std::cin >> this->nickname;
    std::cout << this->nickname << std::endl;
    return (this->nickname);
}

std::string Contact::PhoneNumber(void)
{
    std::cout << "Entrez le numero de telephone : ";
    std::cin >> this->phoneNumber;
    std::cout << this->phoneNumber << std::endl;
    return (this->phoneNumber);
}

std::string Contact::DarkestSecret(void)
{
    std::cout << "Entrez le plus lourd secret : ";
    std::cin >> this->darkestSecret;
    std::cout << this->darkestSecret << std::endl;
    return (this->darkestSecret);
}

void Contact::afficherContact(void)
{
    std::cout << "Prenom : " << this->name << " | ";
    std::cout << "Nom de famille : " << this->lastName << " | ";
    std::cout << "Surnom : " << this->nickname << " | ";
    std::cout << "Numero de telephone : " << this->phoneNumber << std::endl;
}