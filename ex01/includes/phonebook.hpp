#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "main.hpp"

/**
 * @brief Stores a maximum of 9 contact::contact objects to create a phonebook.
 *        Also allows you to add and search contatcs.
 * 
 */
class phonebook {
	private:
		contact	_contacts[MAX_USERS];
		int		_numberOfContacts;
		int		_oldestConntact;

		void	_printTable(void);

	public:
		phonebook(void);
		~phonebook();
		void	search(void);
		void	add(void);
};

#endif
