#include "Contact.hpp"

Contact::Contact(void) 
{
	return ; 
}

Contact::~Contact(void)
{
	return ;
}

std::string Contact::getFirstName(void)
{
	return (this->firstName);
}

std::string Contact::getLastName(void)
{
	return (this->lastName);
}

std::string Contact::getNickname(void)
{
	return (this->nickname);
}

std::string Contact::getLogin(void)
{
	return (this->login);
}

std::string Contact::getPostalAddress(void)
{
	return (this->postalAddress);
}

std::string Contact::getEmailAddress(void)
{
	return (this->emailAddress);
}

std::string Contact::getPhoneNumber(void)
{
	return (this->phoneNumber);
}

std::string Contact::getBirthdayDate(void)
{
	return (this->birthdayDate);
}

std::string Contact::getFavoriteMeal(void)
{
	return (this->favoriteMeal);
}

std::string Contact::getUnderWearColor(void)
{
	return (this->underwearColor);
}

std::string Contact::getDarkestSecret(void)
{
	return (this->darkestSecret);
}

void		Contact::setFirstName(std::string str)
{
	this->firstName = str;
	return ;
}

void		Contact::setLastName(std::string str)
{
	this->lastName = str;
	return ;
}

void		Contact::setNickname(std::string str)
{
	this->nickname = str;
	return ;
}

void		Contact::setLogin(std::string str)
{
	this->login = str;
	return ;
}

void		Contact::setPostalAddress(std::string str)
{
	this->postalAddress = str;
	return ;
}

void		Contact::setEmailAddress(std::string str)
{
	this->emailAdress = str;
	return ;
}

void		Contact::setPhoneNumber(std::string str)
{
	this->phoneNumber = str;
	return ;
}

void		Contact::setBirthdayDate(std::string str)
{
	this->birthdayDate = str;
	return ;
}

void		Contact::setFavoriteMeal(std::string str)
{
	this->favoriteMeal = str;
	return ;
}

void		Contact::setUnderwearColor(std::string str)
{
	this->underwearColor = str;
	return ;
}

void		Contact::setDarkestSecret(std::string str)
{
	this->darkestSecret = str;
	return ;
}