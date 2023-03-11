/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua < suchua@student.42kl.edu.my>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 21:41:42 by suchua            #+#    #+#             */
/*   Updated: 2023/03/11 22:01:04 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	get_input(std::string *input)
{
	if (std::getline(std::cin, *input))
		std::cout << "\n";
}

int	main(void)
{
	std::string	input;
	PhoneBook	book;

	while (1)
	{
		std::cout << "Welcome to Awesome PhoneBook !!!" << std::endl;
		std::cout << "ADD (to add a new contact)" << std::endl;
		std::cout << "SEARCH (display a specific contact)" << std::endl; 
		std::cout << "EXIT" << std::endl;
		std::cout << "(Please enter ADD, SEARCH or EXIT)" << std::endl;
		get_input(&input);
		if (input == "ADD")
			book.add_contact();
		else if (input == "SEARCH")
			book.search_contact();
		else if (input == "EXIT")
			break ;
	}
	return (0);
}
