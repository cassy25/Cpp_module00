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
    tihs->index = 0;
}

phoneBook::~phoneBook()
{

}

void    phoneBook::resumeContact(void)
{
    this->contact[0].afficherContact();
}