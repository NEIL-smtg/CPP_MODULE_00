/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 21:15:09 by suchua            #+#    #+#             */
/*   Updated: 2023/04/03 23:01:15 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	phonebook_index = 0;
}

PhoneBook::~PhoneBook(void)
{
}

void	PhoneBook::add_contact()
{
	std::string fname, lname, nkname, phonenum, secret;

	std::cout << "Enter firstname : " << std::endl;
	std::cin >> fname;
	std::cout << "Enter lastname : " << std::endl;
	std::cin >> lname;
	std::cout << "Enter nickname : " << std::endl;
	std::cin >> nkname;
	std::cout << "Enter phone number : " << std::endl;
	std::cin >> phonenum;
	std::cout << "Enter darkest secret : " << std::endl;
	std::cin >> secret;
	
	Contact newContact = Contact(fname, lname, nkname, phonenum, secret);
	contact[phonebook_index] = newContact;
	phonebook_index = (phonebook_index + 1) % MAX_CONTACT;
}

void	print_info(std::string str)
{
	if (str.length() > 10)
		str = str.substr(0, 9) + ".";
	std::cout << std::setw(10) << str;
	std::cout << '|';
}

void	print_all_contact(Contact contact[MAX_CONTACT])
{
	std::string	tmp;

	for (int i = 0; i < MAX_CONTACT; i++)
	{
		std::cout << std::setw(10) << i + 1;
		std::cout << '|';
		print_info(contact[i].get_first_name());
		print_info(contact[i].get_last_name());
		print_info(contact[i].get_nickname());
		std::cout << std::endl;
	}	
}

void	print_single_contact(Contact contact, int i)
{
	std::string tmp;

	std::cout << std::setw(10) << i;
	std::cout << '|';
	print_info(contact.get_first_name());
	print_info(contact.get_last_name());
	print_info(contact.get_nickname());
	std::cout << std::endl;
}

void	PhoneBook::search_contact(void)
{
	std::string	input;

	print_all_contact(contact);
	std::cout << "Enter index :" << std::endl;
	std::cin >> input;
	if (input.length() > 1 || input.front() < '1' || input.front() > '9')
	{
		std::cout << "Index is out of range" << std::endl;
		return ;
	}
	print_single_contact(contact[input.front() - '0' - 1], input.front() - '0');
}
