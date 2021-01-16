#ifndef CPP_BUREAUCRAT_HPP
#define CPP_BUREAUCRAT_HPP


# include <iostream>
# include <string>
class Form;

# include "Form.hpp"
class Bureaucrat
{
    unsigned int    _grade;
    std::string const    _name;

public:
    Bureaucrat();
    Bureaucrat(Bureaucrat const &src);
    Bureaucrat &operator=(Bureaucrat const &rhs);
    Bureaucrat(std::string name, int grade);
    ~Bureaucrat();

	class GradeTooHighException: public std::exception {
		virtual const char* what() const throw();
	};
	class GradeTooLowException: public std::exception {
		virtual const char* what() const throw();
	};

    std::string     getName(void) const;
    unsigned int    getGrade(void) const;
    void            incrementGrade();
    void            decrementGrade();
    void            signForm(Form &form);
    void            executeForm(Form &form);

};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &i);


#endif //CPP_BUREAUCRAT_HPP
