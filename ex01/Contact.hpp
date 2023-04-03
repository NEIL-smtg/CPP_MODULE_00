/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 21:51:22 by suchua            #+#    #+#             */
/*   Updated: 2023/04/03 22:17:32 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact{

	private:
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		std::string	phone_num;
		std::string	darkest_secret;
	public:
		Contact(void);
		Contact(std::string	firstname, std::string lastname, std::string nickname, \
				std::string phone_num, std::string darkest_secret);
		~Contact(void);
		std::string		get_first_name(void);
		std::string		get_last_name(void);
		std::string		get_nickname(void);
};

#endif
