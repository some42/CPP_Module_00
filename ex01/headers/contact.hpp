/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 11:17:09 by agaliste          #+#    #+#             */
/*   Updated: 2022/03/19 02:06:29 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "main.hpp"

class contact {
	private:
		std::string _Fname;
		std::string _Lname;
		std::string _Nickname;
		std::string _Darksecret;
		std::string	_Phone;
	
		void _setFName();
		void _setLName();
		void _setNickname();
		void _setDarksecret();
		void _setPhone();
		
	public:
		contact();
		~contact();
	
		std::string getFName();
		std::string getLName();
		std::string getNickname();
		std::string getDarksecret();
		std::string getPhone();
		void create();
		void printContact();
		int contentIsEmpty();
};

#endif
