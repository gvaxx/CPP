# include <string>
# include <iostream>
# include <iomanip>

#ifndef CONTACT_HPP
# define CONTAC_THPP

class	Contact
{
	public:
		Contact		(void);
		~Contact	(void);
		void		setFirstName(std::string);
		void		setLastName(std::string);
		void		setNickname(std::string);
		void		setLogin(std::string);
		void		setPostalAddress(std::string);
		void		setEmailAddress(std::string);
		void		setPhoneNumber(std::string);
		void		setBirthdayDate(std::string);
		void		setFavoriteMeal(std::string);
		void		setUnderwearColor(std::string);
		void		setDarkestSecret(std::string);
		std::string	getFirstName(void);
		std::string	getLastName(void);
		std::string	getNickname(void);
		std::string	getLogin(void);
		std::string	getPostalAddress(void);
		std::string	getEmailAddress(void);
		std::string	getPhoneNumber(void);
		std::string	getBirthdayDate(void);
		std::string	getFavoriteMeal(void);
		std::string	getUnderWearColor(void);
		std::string	getDarkestSecret(void);

	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	login;
		std::string	postalAddress;
		std::string	emailAdress;
		std::string	phoneNumber;
		std::string	birthdayDate;
		std::string	favoriteMeal;
		std::string	underwearColor;
		std::string	darkestSecret;
};

#endif
