/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua < suchua@student.42kl.edu.my>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 20:28:22 by suchua            #+#    #+#             */
/*   Updated: 2023/03/11 21:41:36 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->curr_size = 0;
	this->curr_index = 0;
}

PhoneBook::~PhoneBook()
{
}

static void	get_input(std::string *str)
{
	if (std::getline(std::cin, *str))
		std::cout << "\n";
}

void	PhoneBook::add_contact(void)
{
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_num;
	std::string secret;	

	std::cout << "Enter first name : ";
	get_input(&first_name);
	std::cout << "Enter last name : ";
	get_input(&last_name);
	std::cout << "Enter nick name : ";
	get_input(&nickname);
	std::cout << "Enter phone number : ";
	get_input(&phone_num);
	std::cout << "Enter darkest secret : ";
	get_input(&secret);
	contact[curr_index].set_contact(first_name, last_name, nickname, phone_num, secret);
	curr_index = (curr_index + 1) % MAX;
	if (curr_size != 8)
		++curr_size;
}

void	PhoneBook::print_full_contact()
{
	std::cout << std::setw(2) << "index" << std::setw(3) << "|";
	std::cout << "first name" << "|";
	std::cout << std::setw(1) << "last name" << "|";
	std::cout << std::setw(1) << "nick name" << "|" << std::endl;
	for (int i = 0; i < this->curr_size; i++)
	{
		std::cout << std::setw(4) << i << std::setw(5) << "|";
		std::cout << contact[i].get_first_name().substr(0, 9) << "|";
		std::cout << contact[i].get_first_name().substr(0, 9) << "|";
		std::cout << contact[i].get_first_name().substr(0, 9) << "|" << std::endl;
	}
}

void	PhoneBook::search_contact()
{
	std::string index;

	while (1)
	{
		print_full_contact();
		std::cout << "Enter an index to search : ";
		get_input(&index);
		if (index.length() == 1 && index[0] >= '0' && index[0] <= '0' + MAX - 1)
		{
			contact[index[0] - '0'].print_contact();
			break ;
		}
		else
			std::cout << "Invalid index (0 - %d)\n" << MAX;
	}
}
