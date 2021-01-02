# include <string>
# include <iostream>
# include <iomanip>
# include "Contact.hpp"

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class	Phonebook
{
	public:
		Phonebook	(void);
		~Phonebook	(void);
		void addContact();
		void searchInPhonebook();


	private:
		void	createContact(Contact *contact);
		void	showShortList();
		void	showShortContact(Contact contact, int index);
		void	showFullContact(Contact contact);

		int		amount;
		Contact	contacts[8];

};

#endif
