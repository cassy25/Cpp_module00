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

    Contact();
    ~Contact();
    std::string info(std::string str);
    void saveInfo();
    void afficherContact(void);
    void afficherSecret(void);

    //Attributs
    
private:

    std::string _name;
    std::string _lastName;
    std::string _nickname;
    std::string _phoneNumber;
    std::string _darkestSecret;

};

#endif
