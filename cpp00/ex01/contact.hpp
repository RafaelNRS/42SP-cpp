/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranascim <ranascim@student.42.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 00:01:12 by ranascim          #+#    #+#             */
/*   Updated: 2024/04/14 17:30:15 by ranascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

# define EMPTY_FIELD "No field can be empty!"

class Contact
{
	private:
		int			index;
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone;
		std::string secret;

	public:
		Contact(void);

		void setIndex(int index);
		void setFirstName(std::string first_name);
		void setLastName(std::string last_name);
		void setNickname(std::string nickname);
		void setPhone(std::string phone);
		void setSecret(std::string secret);

		int getIndex(void);
		std::string getFirstName(void);
		std::string getLastName(void);
		std::string getNickname(void);
		std::string getPhone(void);
		std::string getSecret(void);
};

#endif