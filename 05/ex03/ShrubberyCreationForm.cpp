
#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(std::string target): 
Form("Shrubbery creation form", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ):
Form("Shrubbery creation form", 145, 137), _target(src._target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
    this->_target = rhs._target;
	return *this;
}

std::string	ShrubberyCreationForm::getTarget() const {return this->_target;}

void ShrubberyCreationForm::execute(Bureaucrat &bureaucrat) const
{
    if(bureaucrat.getGrade() > this->getGradeToExecute())
    {
        throw Form::GradeTooLowException();
        return;
    }

    if(!this->getSigned())
        return;

    std::ofstream outfile(this->getTarget() + "_shrubbery");

	if (!outfile.is_open() || outfile.bad())
        std::cerr << "Error openning the outfile" << std::endl;

    outfile << "" << std::endl << \
    "          &&& &&  & &&" << std::endl << \
    "      && &\\/&\\|& ()|/ @, &&" << std::endl << \
    "      &\\/(/&/&||/& /_/)_&/_&" << std::endl << \
    "   &() &\\/&|()|/&\\/ '% & ()" << std::endl << \
    "  &_\\_&&_\\ |& |&&/&__%_/_& &&" << std::endl << \
    "&&   && & &| &| /& & % ()& /&&" << std::endl << \
    " ()&_---()&\\&\\|&&-&&--%---()~" << std::endl << \
    "     &&     \\|||" << std::endl << \
    "             |||" << std::endl << \
    "             |||" << std::endl << \
    "             |||" << std::endl;

    outfile.close();
    return ;
}

std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & i )
{
	o << i.getName() << " form have" << std::endl <<\
    "target = " << i.getTarget() << std::endl <<\
    "execute grade = " << i.getGradeToExecute() << std::endl <<\
    "sign grade = " << i.getGradeToSigned() << std::endl <<\
    "signed = " << (i.getSigned() ? "true" : "false") << std::endl;

    return (o);
}
