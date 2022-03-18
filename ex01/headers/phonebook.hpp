/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 11:17:09 by agaliste          #+#    #+#             */
/*   Updated: 2022/03/18 23:16:52 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <sstream>
# include <regex>
# include <cstdlib>

# define MAX_USERS 9

class User { 
	public: 
		void create() {
			_setFName();
			_setLName();
			_setNickname();
			_setDarksecret();
			_setPhone();
		}
		int printUser() {
			std::cout << _Fname << " | ";
			std::cout << _Lname << " | ";
			std::cout << _Nickname << " | ";
			std::cout << _Darksecret << " | ";
			std::cout << _Phone << std::endl;
			return 0;
		}
		int	contentIsEmpty() {
			if (_Fname.empty() || _Lname.empty() || _Nickname.empty() || _Darksecret.empty() || _Phone.empty())
				return 1;
			return 0;
		}

	private:
		std::string _Fname;
		std::string _Lname;
		std::string _Nickname;
		std::string _Darksecret;
		std::string	_Phone;

		void _setFName() {
			std::string str;
			while (true)
			{
				std::cout << "First Name: ";
				std::cin >> str;
				if (std::regex_match(str, std::regex("^[A-Za-z]+$"))) {
					_Fname = str;
					break;
				}
				else
					std::cout << "Only letters!" << std::endl;
			}
		}
		void _setLName() {
			std::string str;
			while (true)
			{
				std::cout << "Last Name: ";
				std::cin >> str;
				if (std::regex_match(str, std::regex("^[A-Za-z]+$"))) {
					_Lname = str;
					break;
				}
				else
					std::cout << "Only letters!" << std::endl;
			}
		}
		void _setNickname() {
			std::string str;
			while (true)
			{
				std::cout << "Nickname: ";
				std::cin >> str;
				if (std::regex_match(str, std::regex("^[A-Za-z]+$"))) {
					_Nickname = str;
					break;
				}
				else
					std::cout << "Only letters!" << std::endl;
			}
		}
		void _setDarksecret() {
			std::string str;
			while (true)
			{
				std::cout << "Dark secret: ";
				std::cin >> str;
				if (std::regex_match(str, std::regex("^[A-Za-z]+$"))) {
					_Darksecret = str;
					break;
				}
				else
					std::cout << "Only letters!" << std::endl;
			}
		}
		void _setPhone() {
			std::string str;
			while (true)
			{
				std::cout << "Phone Number: ";
				std::cin >> str;
				if (std::regex_match(str, std::regex("^[0-9]+$")) && str.length() == 9) {
					_Phone = str;
					break;
				}
				else
					std::cout << "Number is too sort or contains letters" << std::endl;
			}
		}
}; 

#endif
