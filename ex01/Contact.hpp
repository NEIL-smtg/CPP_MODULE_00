/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua < suchua@student.42kl.edu.my>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 20:33:36 by suchua            #+#    #+#             */
/*   Updated: 2023/03/11 21:39:34 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_num;
		std::string secret;
	public:
		Contact(void);
		~Contact(void);
		void	set_contact(std::string first_name, std::string last_name, std::string nickname,
										std::string phone_num, std::string secret);
		void	search_contact(int index);
		void	print_contact(void);
		std::string	get_first_name();
		std::string	get_last_name();
		std::string	get_nick_name();
};

#endif