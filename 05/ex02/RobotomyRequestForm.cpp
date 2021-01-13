#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(std::string target): 
Form("Robotomy request form", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ):
Form("Robotomy request form", 72, 45), _target(src._target)
{
}

RobotomyRequestForm::~RobotomyRequestForm(){}

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
    this->_target = rhs._target;
	return *this;
}

std::string	RobotomyRequestForm::getTarget() const 
{return this->_target;}

void RobotomyRequestForm::execute(Bureaucrat &bureaucrat) const
{
    if(bureaucrat.getGrade() > this->getGradeToExecute())
    {
        throw Form::GradeTooLowException();
        return;
    }

    if(!this->getSigned())
        return;

    std::cout << "Vzzzhzhzhhzh. Pik. Tik." << std::endl;
    if(rand() % 2)
        std::cout << this->getTarget() << " has been robotomized successfully!" << std::endl;
    else
        std::cout << "ERROR! ERROR! Robotomy failured!!!" << std::endl;
    return ;
}

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i )
{
	o << i.getName() << " form have" << std::endl <<\
    "target = " << i.getTarget() << std::endl <<\
    "execute grade = " << i.getGradeToExecute() << std::endl <<\
    "sign grade = " << i.getGradeToSigned() << std::endl <<\
    "signed = " << (i.getSigned() ? "true" : "false") << std::endl;

    return (o);
}
