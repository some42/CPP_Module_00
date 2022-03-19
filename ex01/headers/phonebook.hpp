#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "main.hpp"

class phonebook {
	private:
		contact	_contacts[MAX_USERS];
		int		_numberOfContacts;
		int		_oldestConntact;

		void	_printTable();
	public:
		phonebook();
		~phonebook();
		void	search();
		void	add();
};

#endif
