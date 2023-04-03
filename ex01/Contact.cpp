/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 21:58:43 by suchua            #+#    #+#             */
/*   Updated: 2023/04/03 22:17:38 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

Contact::Contact(std::string firstname, std::string lastname, std::string nickname, \
				std::string phone_num, std::string darkest_secret)
{
	this->firstname = firstname;
	this->lastname = lastname;
	this->nickname = nickname;
	this->phone_num = phone_num;
	this->darkest_secret = darkest_secret;
}

std::string Contact::get_first_name(void)
{
	return (this->firstname);
}

std::string Contact::get_last_name(void)
{
	return (this->lastname);
}

std::string Contact::get_nickname(void)
{
	return (this->nickname);
}
