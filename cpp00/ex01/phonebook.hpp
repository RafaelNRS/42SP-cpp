/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranascim <ranascim@student.42.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 00:01:12 by ranascim          #+#    #+#             */
/*   Updated: 2024/04/14 17:30:03 by ranascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iomanip>
# include <limits>
# include "contact.hpp"

class PhoneBook
{
	private:
		Contact phonebook[8];
		int		oldest;

		std::string truncateField(std::string field);

	public:
		PhoneBook(void);

		void addContact(Contact contact);
		void displayContacts(void);
};

#endif