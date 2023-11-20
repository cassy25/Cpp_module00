/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgeoffra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:55:44 by cgeoffra          #+#    #+#             */
/*   Updated: 2023/11/17 10:55:46 by cgeoffra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

phoneBook::phoneBook()
{
    this->index = 0;
    return ;
}

phoneBook::~phoneBook()
{
    return ;
}

//A function who show the contact resume for the index  
void    phoneBook::resumeAllContact(void)
{
    int i = 1;
    while (i <= this->index)
    {
        std::cout << "Index : " << i << " | ";
        contact[i].afficherContact();
        std::cout << std::endl;
        i++;
    }
}

//A function who show the contact for the index compared with the search
void    phoneBook::resumeContact(void)
{
    int i = 1;
    int index;
    while (i <= this->index)
    {
        if (i == (index = std::stoi(search)))
        {
            std::cout << "Index : " << i << " | ";
            contact[i].afficherContact();
            contact[i].afficherSecret();
        }
        i++;
    }
}

//A function who save info of the contact
void  phoneBook::create(void)
{
    
    contact[index].saveInfo();
}

//A function who increase the index
void    phoneBook::Index()
{
    index++;
}

//A function who write the index
void    phoneBook::showIndex()
{
    std::cout << "L'index de votre contact est le : " << index << std::endl;
}

//A function who put index = 0 when index > 8
