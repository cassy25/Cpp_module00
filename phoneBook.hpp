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
# include "contact.hpp"

class phoneBook
{
public:

    phoneBook();
    ~phoneBook();
    void resumeContact(void);

private:

    Contact contact[8];
    int index;
};

#endif
