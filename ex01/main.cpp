/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 21:45:41 by suchua            #+#    #+#             */
/*   Updated: 2023/04/03 23:02:11 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void)
{
	std::string	input;
	PhoneBook	_phone_book;

	std::cout << "Welcome to Awesome PhoneBook HEHE.." << std::endl;
	do
	{
		std::cout << "\n\n";
		std::cout << "ADD" << std::endl;
		std::cout << "SEARCH" << std::endl;
		std::cout << "EXIT" << std::endl;
		std::cout << "Enter a choice (ADD, SEARCH, EXIT) : "; 
		std::cin >> input;

		if (input == "ADD")
			_phone_book.add_contact();
		else if (input == "SEARCH")
			_phone_book.search_contact();
		else if (input == "EXIT")
			break ;
		input = "";
	}while (input != "EXIT");
	return (0);
}
