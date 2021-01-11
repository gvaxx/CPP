#include "Intern.hpp"
	
std::string
Intern::_formsName[3] = {
    "presidential pardon",
    "robotomy request",
    "shrubbery creation"
};

	Form* (Intern::*_formsMaker[3])(std::string) = {

	};
Intern::Intern(){
	this->_formsMaker[0] = &Intern::makeShruberyCreationForm;
	this->_formsMaker[1] = &Intern::makeRobotomyRequestForm;
	this->_formsMaker[2] = &Intern::makePresidentalPardonForm;
}

Intern::Intern( const Intern & src ){
	(void)src;

	this->_formsMaker[0] = &Intern::makeShruberyCreationForm;
	this->_formsMaker[1] = &Intern::makeRobotomyRequestForm;
	this->_formsMaker[2] = &Intern::makePresidentalPardonForm;
}

Intern::~Intern(){}

Intern &				Intern::operator=( Intern const & rhs )
{
	(void)rhs;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Intern const & i )
{
	(void)i;
	o << "One of some interns" << std::endl;
	return o;
}

Form* Intern::makeShruberyCreationForm(std::string target) {return new ShrubberyCreationForm(target);}
Form* Intern::makeRobotomyRequestForm(std::string target){return new RobotomyRequestForm(target);}
Form* Intern::makePresidentalPardonForm(std::string target){return new PresidentialPardonForm(target);}

Form* Intern::makeForm(std::string formType, std::string target)
{
	for(int i = 0; i < 3; i++)
		if(this->_formsName[i] == formType)
		{
			std::cout << "Intern creates " << this->_formsName[i] << " form" << std::endl;
			return (this->*_formsMaker[i])(target);
		}
	
	std::cerr << "Form not found" << std::endl;
	return NULL;
}