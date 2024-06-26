/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranascim <ranascim@student.42.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 00:01:12 by ranascim          #+#    #+#             */
/*   Updated: 2024/04/14 17:29:53 by ranascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook(void)
{
	this->oldest = 0;
	for (int i = 0; i <= 7; i++)
		this->phonebook[i].setIndex(-1);
}

void PhoneBook::addContact(Contact contact)
{
	if (this->oldest > 7)
		this->oldest = 0;
	contact.setIndex(this->oldest);
	this->phonebook[this->oldest] = contact;
	this->oldest++;
}

std::string PhoneBook::truncateField(std::string field)
{
	if (field.length() > 10)
	{
		field = field.substr(0, 10);
		field[9] = '.';
	}
	return field;
}

void PhoneBook::displayContacts(void)
{
	int index_choise = -1;

	if (phonebook[0].getIndex() == -1)
	{
		std::cout << "There are no contacts saved!" << std::endl;
		return;
	}
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout << "|  index   |first name| last name| nickname |" << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	for (int i = 0; i <= 7; i++)
	{
		if (phonebook[i].getIndex() != -1)
		{
			std::cout << "|" << std::setw(10) << std::right << phonebook[i].getIndex() + 1 << "|";
			std::cout << std::setw(10) << std::right << truncateField(phonebook[i].getFirstName()) << "|";
			std::cout << std::setw(10) << std::right << truncateField(phonebook[i].getLastName()) << "|";
			std::cout << std::setw(10) << std::right << truncateField(phonebook[i].getNickname()) << "|" << std::endl;
		}
	}
    std::cout << "+----------+----------+----------+----------+" << std::endl;
	while (true)
	{
		std::cout << "Type the index of the contact you wish to access >> ";
		std::cin >> index_choise;
		if (std::cin.fail())
		{
    		std::cin.clear();
   			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		index_choise--;
		if ((index_choise >= 0 && index_choise <= 7) && phonebook[index_choise].getIndex() != -1)
		{
			std::cout << "Index: " << phonebook[index_choise].getIndex() + 1 << std::endl;
			std::cout << "First Name: " << phonebook[index_choise].getFirstName() << std::endl;
			std::cout << "Last Name: " << phonebook[index_choise].getLastName() << std::endl;
			std::cout << "Nickname: " << phonebook[index_choise].getNickname() << std::endl;
			std::cout << "Phone: " << phonebook[index_choise].getPhone() << std::endl;
			std::cout << "Darkest Secret: " << phonebook[index_choise].getSecret() << std::endl;
			break;
		}
		else
		{
			std::cout << "Contact with that index does not exist!" << std::endl;
			index_choise = -1;
		}
	}
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}