/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 00:27:19 by agaliste          #+#    #+#             */
/*   Updated: 2022/03/19 02:43:23 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

phonebook::phonebook()
{
	_numberOfContacts = 0;
	_oldestConntact = 0;
}

phonebook::~phonebook(){}

void	phonebook::search()
{
	std::string input;
	uint64_t 	index;
	
	system("clear");
	_printTable();
	while (true)
	{
		std::cout << "Index: ";
		std::cin >> input;
		if (!std::regex_match(input, std::regex("^[0-9]+$")))
		{
			std::cout << "Index can only be a number!" << std::endl;
			continue;
		}
		index = std::stoi(input);
		if (input.length() == 1 && index < MAX_USERS)
		{
			if (_contacts[index].contentIsEmpty())
				std::cout << "That index does not exist!" << std::endl;
			else
			{
				system("clear");
				std::cout << std::endl << "*-------------------------------------------*" << std::endl;
				std::cout << "|                 CONTACT " << "[" << index <<"]               |" << std::endl;
				std::cout << "*-------------------------------------------*" << std::endl;
				_contacts[index].printContact();
				std::this_thread::sleep_for(std::chrono::milliseconds(3000));
				break;
			}
		}
		else
			std::cout << "Index not valid!" << std::endl;
	}
}

void	phonebook::add()
{
	uint64_t index = 0;

	system("clear");
	std::cout << std::endl << "*-------------------------------------------*" << std::endl;
	std::cout << "|                 ADD USER                  |" << std::endl;
	std::cout << "*-------------------------------------------*" << std::endl;
	
	if (!(_numberOfContacts > 7))
	{
		while(!_contacts[index].contentIsEmpty())
		{
			if (index >= MAX_USERS)
			{
				index = 0;
				break;
			}
			index++;
		}	
	}
	else
	{
		if (_oldestConntact == MAX_USERS - 1)
			_oldestConntact = 0;
		else
		{
			index = _oldestConntact;
			_oldestConntact += 1;
		}
	}
	_contacts[index].create();
	if (!(_numberOfContacts == MAX_USERS))
		_numberOfContacts += 1;
}

void	phonebook::_printTable()
{
	std::string	string;

	std::cout << std::endl << "*-------------------------------------------*" << std::endl;
	std::cout << "|     INDEX| FIRSTNAME|  LASTNAME|  NICKNAME|" << std::endl;
	std::cout << "*-------------------------------------------*" << std::endl;
	
	for(int i = 0; (i < _numberOfContacts) && (i < 8); i++)
	{
		std::cout << "|"; std::cout << std::setw(10) << std::right << i;

		if (_contacts[i].getFName().length() > 9)
		{
			string = _contacts[i].getFName().substr(0, 9);
			std::cout << "|"; std::cout << std::setw(10) << std::right << string.append(".");
		}
		else
		{
			std::cout << "|"; std::cout << std::setw(10) << std::right << _contacts[i].getFName();	
		}

		if (_contacts[i].getLName().length() > 9)
		{
			string = _contacts[i].getLName().substr(0, 9);
			std::cout << "|"; std::cout << std::setw(10) << std::right << string.append(".");
		}
		else
		{
			std::cout << "|"; std::cout << std::setw(10) << std::right << _contacts[i].getLName();
		}

		if (_contacts[i].getNickname().length() > 9)
		{
			string = _contacts[i].getNickname().substr(0, 9);
			std::cout << "|"; std::cout << std::setw(10) << std::right << string.append(".");
		}
		else
		{
			std::cout << "|"; std::cout << std::setw(10) <<  std::right << _contacts[i].getNickname();
		}
		std::cout << "|"; std::setw(1); std::cout << "\n";
	}
	std::cout << "*-------------------------------------------*\n" << std::endl;
}
