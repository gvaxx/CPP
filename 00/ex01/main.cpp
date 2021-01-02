#include <iostream>
#include <cctype>
#include "Phonebook.hpp"

void showHeader() {
	std::cout << "Allowed commands: ADD SEARCH EXIT" << std::endl;
	std::cout << ">";
}

int	main(void) {
	std::string command;
	Phonebook phonebook;
	std::cout << "Hi, it's your phonebook!" << std::endl;

	while (1) {
		showHeader();
		std::getline(std::cin, command);
		if (command == "ADD")
			phonebook.addContact();
		else if (command == "SEARCH")
			phonebook.searchInPhonebook();
		else if (command == "EXIT" || std::cin.eof())
			break;
	}
	return 0;
}
