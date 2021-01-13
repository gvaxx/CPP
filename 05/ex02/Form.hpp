#ifndef CPP_FORM_HPP
#define CPP_FORM_HPP


# include <iostream>
# include <string>
class Bureaucrat;
# include "Bureaucrat.hpp"

class Form
{
    std::string const       _name;
    bool                    _sign;
    unsigned int const      _gradeToSigned;
    unsigned int const      _gradeToExecute;
    Form();

public:
    Form(Form const &src);
    Form &operator=(Form const &rhs);
    Form(std::string name, int gradeToSign, int gradeToExecute);
    virtual ~Form();

	class GradeTooHighException: public std::exception {
		virtual const char* what() const throw();
	};
	class GradeTooLowException: public std::exception {
		virtual const char* what() const throw();
	};

    std::string     getName(void) const;
    unsigned int    getGradeToExecute(void) const;
    unsigned int    getGradeToSigned(void) const;
    bool            getSigned(void) const;

    void            beSigned(Bureaucrat &bureaucrat);
    virtual void    execute(Bureaucrat &bureaucrat) const = 0;

};

std::ostream &operator<<(std::ostream &o, Form const &i);


#endif //CPP_FORM_HPP
