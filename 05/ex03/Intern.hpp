#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
	static std::string _formsName[3];

	Form* (Intern::*_formsMaker[3])(std::string);

	Form *makeShruberyCreationForm(std::string target);
	Form *makeRobotomyRequestForm(std::string target);
	Form *makePresidentalPardonForm(std::string target);

	public:

		Intern();
		Intern( Intern const & src );
		~Intern();

		Intern &		operator=( Intern const & rhs );
		Form *makeForm(std::string formType, std::string target);
};

std::ostream &			operator<<( std::ostream & o, Intern const & i );

#endif