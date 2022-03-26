/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 11:17:09 by agaliste          #+#    #+#             */
/*   Updated: 2022/03/26 23:08:00 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "main.hpp"

/**
 * @brief Stores all the needed information to create a contact:
 *        (First Name, Last name, Nickname, Darkest secret, Phone)
 * 
 */
class contact {
	private:
		std::string _Fname;
		std::string _Lname;
		std::string _Nickname;
		std::string _Darksecret;
		std::string	_Phone;
	
		void _setFName(void);
		void _setLName(void);
		void _setNickname(void);
		void _setDarksecret(void);
		void _setPhone(void);
		
	public:
		contact(void);
		~contact();
	
		void		create(void);
		std::string getFName(void);
		std::string getLName(void);
		std::string getNickname(void);
		std::string getDarksecret(void);
		std::string getPhone(void);
		void 		printContact(void);
		int			contentIsEmpty(void);
};

#endif
