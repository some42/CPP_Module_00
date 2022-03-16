/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 11:17:09 by agaliste          #+#    #+#             */
/*   Updated: 2022/03/16 17:02:40 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <sstream>
#include <regex>

class User { 
	public: 
		void setFName(){
			std::string str;
			while (true)
			{
				std::cout << "First Name: ";
				std::cin >> str;
				if (std::regex_match(str, std::regex("^[A-Za-z]+$"))){
					_Fname = str;
					break;
				}
				else {
					std::cout << "Only letters!" << std::endl;
				}
			}
		}
		void setLName(){
			std::string str;
			while (true)
			{
				std::cout << "Last Name: ";
				std::cin >> str;
				if (std::regex_match(str, std::regex("^[A-Za-z]+$"))){
					_Lname = str;
					break;
				}
				else {
					std::cout << "Only letters!" << std::endl;
				}
			}
		}
		void setNickname(){
			std::string str;
			while (true)
			{
				std::cout << "Nickname: ";
				std::cin >> str;
				if (std::regex_match(str, std::regex("^[A-Za-z]+$"))){
					_Nickname = str;
					break;
				}
				else {
					std::cout << "Only letters!" << std::endl;
				}
			}
		}
		void setDarksecret(){
			std::string str;
			while (true)
			{
				std::cout << "Dark secret: ";
				std::cin >> str;
				if (std::regex_match(str, std::regex("^[A-Za-z]+$"))){
					_Darksecret = str;
					break;
				}
				else {
					std::cout << "Only letters!" << std::endl;
				}
			}
		}
		void setPhone(){
			std::string str;
			while (true)
			{
				std::cout << "Phone Number: ";
				std::cin >> str;
				if (std::regex_match(str, std::regex("^[0-9]+$")) && str.length() == 9) {
					_Phone = str;
					break;
				}
				else {
					std::cout << "Number is too sort or contains letters" << std::endl;
				}
			}
		}
		int printUser(){
			if (!_checkForEmptyContent())
				return 1;
			std::cout << _Fname << " | ";
			std::cout << _Lname << " | ";
			std::cout << _Nickname << " | ";
			std::cout << _Darksecret << " | ";
			std::cout << _Phone << std::endl;
			return 0;
		}

	private:
		std::string _Fname;
		std::string _Lname;
		std::string _Nickname;
		std::string _Darksecret;
		std::string	_Phone;

		int	_checkForEmptyContent(){
			if (_Fname.empty() || _Lname.empty() || _Nickname.empty() || _Darksecret.empty() || _Phone.empty())
				return 0;
			return 1;
		}
}; 

#endif