#ifndef CPP_BUREAUCRAT_HPP
#define CPP_BUREAUCRAT_HPP


# include <iostream>
# include <string>

class Bureaucrat
{
    std::string     _grade;
    unsigned int    _name;
public:
    Bureaucrat();
    Bureaucrat(Bureaucrat const &src);
    Bureaucrat &operator=(Bureaucrat const &rhs);
    Bureaucrat(std::string value);
    ~Bureaucrat();
    GradeTooHighException();
    GradeTooLowException();
};

std::ostream &operator<<(std::ostream &o, Fool const &i);


#endif //CPP_BUREAUCRAT_HPP
