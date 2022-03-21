/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 11:50:20 by agaliste          #+#    #+#             */
/*   Updated: 2022/03/21 21:24:36 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

static inline void
	printStartHeader() {
	std::cout << std::endl << "*-------------------------------------------*" << std::endl;
	std::cout << "|                 PHONEBOOK                 |" << std::endl;
	std::cout << "*-------------------------------------------*" << std::endl;
}

int	main(void)
{
	phonebook phonebook;
	std::string command;

	do
	{
		system("clear");
		printStartHeader();
		std::cout << "Command: ";
		std::cin >> command;

		if (command == "EXIT")
			break;
		if (command == "ADD")
			phonebook.add();
		if (command == "SEARCH")
			phonebook.search();
	} while (command != "EXIT" && command != "\0");
	exit (0);
}
