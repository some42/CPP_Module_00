/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 11:50:20 by agaliste          #+#    #+#             */
/*   Updated: 2022/03/16 17:45:04 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main(void)
{
	User 		phonebook[MAX_USERS];
	std::string command = " ";
	uint64_t 	i;

	while (command != "EXIT")
	{
		std::cout << "Command: ";
		std::cin >> command;
		if (command == "EXIT")
			break;
		if (command == "ADD"){
			i = 0;
			while(!phonebook[i].contentIsEmpty())
			{
				if (i >= 9)
				{
					i = 0;
					break;
				}
				i++;
			}
			phonebook[i].create();
			phonebook[i].printUser();
		}
		if (command == "SEARCH"){
			while (true) {
				std::cout << "Index: ";
				std::cin >> command;
				i = std::stoi(command);
				if (std::regex_match(command, std::regex("^[0-9]+$")) && command.length() == 1 && i < MAX_USERS && i > 0) {
					if (phonebook[i - 1].contentIsEmpty())
						std::cout << "That index does not exist!" << std::endl;
					else
					{
						phonebook[i - 1].printUser();
						break;
					}
				}
				else
					std::cout << "Index not valid!" << std::endl;
			}
		}
	}
	exit (0);
}