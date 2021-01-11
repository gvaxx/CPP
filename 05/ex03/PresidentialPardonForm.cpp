#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(std::string target): 
Form("Presidental pardon form", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ):
Form("Presidental pardon form", 25, 5), _target(src._target)
{
}

PresidentialPardonForm::~PresidentialPardonForm(){}

PresidentialPardonForm &				PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
    this->_target = rhs._target;
	return *this;
}

std::string	PresidentialPardonForm::getTarget() const {return this->_target;}

void PresidentialPardonForm::execute(Bureaucrat &bureaucrat) const
{
    if(bureaucrat.getGrade() > this->getGradeToExecute())
    {
        throw Form::GradeTooLowException();
        return;
    }

    if(!this->getSigned())
        return;
    std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
    return ;
}

std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & i )
{
	o << i.getName() << " form have" << std::endl <<\
    "target = " << i.getTarget() << std::endl <<\
    "execute grade = " << i.getGradeToExecute() << std::endl <<\
    "sign grade = " << i.getGradeToSigned() << std::endl <<\
    "signed = " << (i.getSigned() ? "true" : "false") << std::endl;

    return (o);
}
