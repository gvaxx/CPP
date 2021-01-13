#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
    srand(time(NULL));
	Form *f1;
    Form *f2;
    Form *f3;
    Form *f4;
    Intern i1;
    Bureaucrat b1 = Bureaucrat("Boss", 1);

    f1 = i1.makeForm("robotomy request", "Elvis");
    f2 = i1.makeForm("presidential pardon", "Elvis");
    f3 = i1.makeForm("shrubbery creation", "Elvis");
    f4 = i1.makeForm("for naving nice day", "Elvis");
    std::cout << *f1 << std::endl;
    std::cout << *f2 << std::endl;
    std::cout << *f3 << std::endl;

    b1.signForm(*f1);
    b1.executeForm(*f1);


    return (0);
}