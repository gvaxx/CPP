# include "Phonebook.hpp"

Phonebook::Phonebook(void) 
{
	this->amount = 0;
	return ;
}

Phonebook::~Phonebook(void)
{
	return ;
}

std::string formatString(std::string field)
{
	if (field.length() > 10)
		return field.substr(0, 9).append(".") ;
	return field;
}

void	Phonebook::addContact(void)
{
	if (this->amount < 8)
		this->createContact(&this->contacts[this->amount++]);
	else
		std::cout << "Your phonebook is full!" << std::endl;
}

void	Phonebook::createContact(Contact *contact)
{
	std::string inputFiled;

	std::cout << "First name : ";
	std::getline(std::cin, inputFiled);
	contact->setFirstName(inputFiled);

	std::cout << "Last name : ";
	std::getline(std::cin, inputFiled);
	contact->setLastName(inputFiled);

	std::cout << "Nick name : ";
	std::getline(std::cin, inputFiled);
	contact->setNickname(inputFiled);

	std::cout << "Login : ";
	std::getline(std::cin, inputFiled);
	contact->setLogin(inputFiled);

	std::cout << "Postal Address : ";
	std::getline(std::cin, inputFiled);
	contact->setPostalAddress(inputFiled);

	std::cout << "Email Address : ";
	std::getline(std::cin, inputFiled);
	contact->setEmailAddress(inputFiled);

	std::cout << "Phone Number : ";
	std::getline(std::cin, inputFiled);
	contact->setPhoneNumber(inputFiled);

	std::cout << "Birthday : ";
	std::getline(std::cin, inputFiled);
	contact->setBirthdayDate(inputFiled);

	std::cout << "Favorite Meal : ";
	std::getline(std::cin, inputFiled);
	contact->setFavoriteMeal(inputFiled);

	std::cout << "Underwear Color : ";
	std::getline(std::cin, inputFiled);
	contact->setUnderwearColor(inputFiled);

	std::cout << "Darkest Secret : ";
	std::getline(std::cin, inputFiled);
	contact->setDarkestSecret(inputFiled);

	std::cout << "Contact saved" << std::endl;
}

void Phonebook::searchInPhonebook()
{
	int index;

	if (this->amount)
	{
		this->showShortList();
		while (true)
		{
			std::cin >> index;
			if (std::cin.good())
			{
				if (index < this->amount && index >= 0) {
					this->showFullContact(this->contacts[index]);
					break ;
				}
				else
					std::cout << "There is no such index" << std::endl;
			}
			else
				std::cout << "Invalid input. Try Again\n";
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	}
	else
		std::cout << "You have 0 contact" << std::endl;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void Phonebook::showShortList()
{
	std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
	for (int i = 0; i < this->amount; i++)
		this->showShortContact(this->contacts[i], i);
}

void Phonebook::showShortContact(Contact contact, int index)
{
	std::cout << std::setw(10) << index;
	std::cout << "|" << std::setw(10) << formatString(contact.getFirstName());
	std::cout << "|" << std::setw(10) << formatString(contact.getLastName());
	std::cout << "|" << std::setw(10) << formatString(contact.getNickname()) << std::endl;
}

void Phonebook::showFullContact(Contact contact)
{
	std::cout << contact.getFirstName() << std::endl;
	std::cout << contact.getLastName() << std::endl;
	std::cout << contact.getNickname() << std::endl;
	std::cout << contact.getLogin() << std::endl;
	std::cout << contact.getPostalAddress() << std::endl;
	std::cout << contact.getEmailAddress() << std::endl;
	std::cout << contact.getPhoneNumber() << std::endl;
	std::cout << contact.getBirthdayDate() << std::endl;
	std::cout << contact.getFavoriteMeal() << std::endl;
	std::cout << contact.getUnderWearColor() << std::endl;
	std::cout << contact.getDarkestSecret() << std::endl;
}
