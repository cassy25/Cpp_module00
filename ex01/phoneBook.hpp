/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgeoffra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:55:58 by cgeoffra          #+#    #+#             */
/*   Updated: 2023/11/17 10:56:00 by cgeoffra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include "contact.hpp"

class PhoneBook
{
public:

    PhoneBook();
    ~PhoneBook();
    void resumeContact(void);
    void Index();
    void showIndex();
    void resumeAllContact(void);
    void create();
    void resetIndex();
    std::string search;


private:

    Contact contact[9];
    int index;
};

#endif
