/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua < suchua@student.42kl.edu.my>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 20:27:34 by suchua            #+#    #+#             */
/*   Updated: 2023/03/11 21:39:25 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "Contact.hpp"

# define MAX 8

class PhoneBook
{
	private:
		Contact	contact[MAX];
		int		curr_size;
		int		curr_index;
	public:
		PhoneBook();
		virtual	~PhoneBook();
		void	add_contact(void);
		void	print_full_contact();
		void	search_contact();
};

#endif