/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgeoffra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:56:18 by cgeoffra          #+#    #+#             */
/*   Updated: 2023/11/17 10:56:20 by cgeoffra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
public:

    //Methodes
    //Jamais modifiable
    Contact();
    ~Contact();
    std::string Name(void);
    std::string LastName(void);
    std::string NickName(void);
    std::string PhoneNumber(void);
    std::string DarkestSecret(void);
    void afficherContact(void);

    //Attributs
private:

    std::string name;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;
};

#endif