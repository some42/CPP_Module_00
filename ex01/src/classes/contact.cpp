/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 00:31:06 by agaliste          #+#    #+#             */
/*   Updated: 2022/03/26 22:26:23 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

/**
 * @brief Construct a new contact::contact object
 * 
 */
contact::contact() {}

/**
 * @brief Destroy the contact::contact object
 * 
 */
contact::~contact() {}

std::string	contact::getFName() {return _Fname;}
std::string	contact::getLName() {return _Lname;}
std::string	contact::getNickname() {return _Nickname;}
std::string	contact::getDarksecret() {return _Darksecret;}
std::string	contact::getPhone() {return _Phone;}

/**
 * @brief Promts to initialize the contact::contact object setting all its values
 * 
 */
void contact::create()
{
	_setFName();
	_setLName();
	_setNickname();
	_setDarksecret();
	_setPhone();
}

/**
 * @brief Prints to STDOUT all the contact::contact object information
 * 
 *
 */
void contact::printContact()
{
	std::cout << std::endl << "First Name: " << _Fname << std::endl;
	std::cout << "last Name: " << _Lname << std::endl;
	std::cout << "Nickname: " << _Nickname << std::endl;
	std::cout << "Dark Secret: " << _Darksecret << std::endl;
	std::cout << "Phone: " << _Phone << std::endl << std::endl;
}

/**
 * @brief Checks if any variable in the contact::contact object is empty
 * 
 * @return int
 * 
 * @retval 1 - Any variable is empty
 * @retval 0 - All variables have content
 */
int contact::contentIsEmpty()
{
	if (_Fname.empty() || _Lname.empty() || _Nickname.empty() || _Darksecret.empty() || _Phone.empty())
		return 1;
	return 0;
}

/**
 * @brief Set _FName variable value in contact::contact object
 * 
 *
 */
void contact::_setFName()
{
	std::string str;
	while (true)
	{
		std::cout << "First Name: ";
		std::cin >> str;
		if (std::regex_match(str, std::regex("^[A-Za-z]+$")))
		{
			_Fname = str;
			break;
		}
		else
			std::cout << "Only letters!" << std::endl;
	}
}

/**
 * @brief Set _LName variable value in contact::contact object
 * 
 *
 */
void contact::_setLName()
{
	std::string str;
	while (true)
	{
		std::cout << "Last Name: ";
		std::cin >> str;
		if (std::regex_match(str, std::regex("^[A-Za-z]+$")))
		{
			_Lname = str;
			break;
		}
		else
			std::cout << "Only letters!" << std::endl;
	}
}

/**
 * @brief Set _Nickname variable value in contact::contact object
 * 
 *
 */
void contact::_setNickname()
{
	std::string str;
	while (true)
	{
		std::cout << "Nickname: ";
		std::cin >> str;
		if (std::regex_match(str, std::regex("^[A-Za-z]+$")))
		{
			_Nickname = str;
			break;
		}
		else
			std::cout << "Only letters!" << std::endl;
	}
}

/**
 * @brief Set _Darksecret variable value in contact::contact object
 * 
 *
 */
void contact::_setDarksecret()
{
	std::string str;
	while (true)
	{
		std::cout << "Dark secret: ";
		std::cin >> str;
		if (std::regex_match(str, std::regex("^[A-Za-z]+$")))
		{
			_Darksecret = str;
			break;
		}
		else
			std::cout << "Only letters!" << std::endl;
	}
}

/**
 * @brief Set _Phone variable value in contact::contact object
 * 
 *
 */
void contact::_setPhone()
{
	std::string str;
	while (true)
	{
		std::cout << "Phone Number: ";
		std::cin >> str;
		if (std::regex_match(str, std::regex("^[0-9]+$")) && str.length() == 9)
		{
			_Phone = str;
			break;
		}
		else
			std::cout << "Number is too sort or contains letters" << std::endl;
	}
}
