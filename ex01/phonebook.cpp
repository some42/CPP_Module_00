/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 11:50:20 by agaliste          #+#    #+#             */
/*   Updated: 2022/03/16 16:54:14 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main(void)
{
	User phonebook[9];
	std::string command = " ";

	while (command != "EXIT")
	{
		std::cout << "Command: ";
		std::cin >> command;
		if (command == "EXIT")
			break;
		if (command == "ADD"){
			phonebook[0].setFName();
			phonebook[0].setLName();
			phonebook[0].setNickname();
			phonebook[0].setDarksecret();
			phonebook[0].setPhone();
			phonebook[0].printUser();
		}
		if (command == "SEARCH"){}
	}
	exit (0);
}