#include"Form.hpp"

Form::Form(){}

Form::Form(const Form &src):
    _name(src._name),
    _sign(false),
    _gradeToSigned(src._gradeToSigned),
    _gradeToExecute(src._gradeToExecute){}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) :
    _name(name),
    _sign(false),
    _gradeToSigned(gradeToSign),
    _gradeToExecute(gradeToExecute)
{
    if (this->_gradeToSigned < 1 || this->_gradeToExecute < 1)
    {
        throw Form::GradeTooHighException();
    }
    else if (this->_gradeToSigned > 150 || this->_gradeToExecute > 150)
    {
        throw Form::GradeTooLowException();
    }
    return ;
}

Form::~Form() {}

Form &Form::operator=(const Form &src) {

    this->_gradeToExecute = src._gradeToExecute;
    this->_gradeToSigned = src._gradeToSigned;
    this->_sign = src._sign;
    this->_name = src._name;

    return *this;
}

std::ostream &operator<<(std::ostream &o, Form const &i)
{
    o << i.getName() << " form have" << std::endl <<\
    "execute grade = " << i.getGradeToExecute() << std::endl <<\
    "sign grade = " << i.getGradeToSigned() << std::endl <<\
    "signed = " << (i.getSigned() ? "true" : "false") << std::endl;

    return (o);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "FormException: Grade too High";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "FormException: Grade too Low";
}

std::string     Form::getName(void) const {return this->_name;}
unsigned int    Form::getGradeToExecute(void) const {return this->_gradeToExecute;}
unsigned int    Form::getGradeToSigned(void) const {return this->_gradeToSigned;}
bool            Form::getSigned(void) const {return this->_sign;}

void            Form::beSigned(Bureaucrat &bureaucrat)
{
    if(bureaucrat.getGrade() > this->_gradeToSigned)
        throw Form::GradeTooLowException();
    if(this->_sign)
        return;
    this->_sign = true;
}
