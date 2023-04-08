/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suchua <suchua@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 21:51:22 by suchua            #+#    #+#             */
/*   Updated: 2023/04/08 17:46:49 by suchua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact{

	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phoneNum;
		std::string	darkestSecret;
	public:
		Contact(void);
		Contact(std::string	firstName, std::string lastName, std::string nickName, \
				std::string phoneNum, std::string darkestSecret);
		~Contact(void);
		std::string		getFirstName(void);
		std::string		getLastName(void);
		std::string		getNickName(void);
};

#endif
