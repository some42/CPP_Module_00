/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 11:50:20 by agaliste          #+#    #+#             */
/*   Updated: 2022/03/19 02:09:33 by agaliste         ###   ########.fr       */
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

	while (command != "EXIT")
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
	}
	exit (0);
}
