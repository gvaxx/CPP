#include"Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat &src): _grade(src._grade), _name(src._name){}

Bureaucrat::Bureaucrat(std::string name, int grade): _grade(grade), _name(name)
{
    if(grade > 150)
        throw Bureaucrat::GradeTooLowException();
    if(grade < 1)
        throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
    this->_grade = src._grade;
    return *this;
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &i)
{
    o << i.getName() << ", bureaucrat grade " << i.getGrade() \
        << std::endl;
    return (o);
}


const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "BureaucratException: Grade too High";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "BureaucratException: Grade too Low";
}

std::string     Bureaucrat::getName(void) const {return this->_name;}
unsigned int    Bureaucrat::getGrade(void) const {return this->_grade;}

void            Bureaucrat::incrementGrade()
{
    if (this->_grade == 1)
        throw Bureaucrat::GradeTooHighException();
    this->_grade -= 1;
}

void            Bureaucrat::decrementGrade()
{
    if (this->_grade == 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade += 1;
}

void            Bureaucrat::signForm(Form &form)
{
    if(form.getGradeToSigned() < this->getGrade())
        std::cout << this->getName() << " cannot sign " << form.getName() << " because bureaucrat grade lower than need" << std::endl;
    else if(form.getSigned())
        std::cout << this->getName() << " cannot sign " << form.getName() << " because form is already signed" << std::endl;
    else
        std::cout << this->getName() << " signs " << form.getName() << std::endl;
    form.beSigned(*this);

}

void            Bureaucrat::executeForm(Form &form)
{
    if(form.getGradeToExecute() < this->getGrade())
        std::cout << this->getName() << " cannot execute " << form.getName() << " because bureaucrat grade lower than need" << std::endl;
    else if(!form.getSigned())
        std::cout << this->getName() << " cannot execute " << form.getName() << " because form is not signed" << std::endl;
    else
        std::cout << this->getName() << " execute " << form.getName() << std::endl;
    form.execute(*this);
}