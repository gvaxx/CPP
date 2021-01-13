#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	srand(time(NULL));

	Bureaucrat Boss("Boss", 1);
	std::cout << Boss << std::endl;
	Bureaucrat Burmental("Burmental", 25);
	std::cout << Burmental << std::endl;

	Form *shrub = new ShrubberyCreationForm("Earth");
	std::cout << *shrub << std::endl;
	shrub->beSigned(Boss);
	shrub->execute(Burmental);
	std::cout << *shrub << std::endl;

	Form *pres = new PresidentialPardonForm("Burmental");
	std::cout << *pres << std::endl;
	Boss.signForm(*pres);
	pres->execute(Boss);

	Form *robot = new RobotomyRequestForm("Bender");
	std::cout << *robot << std::endl;

	Burmental.executeForm(*robot);
	robot->beSigned(Boss);
	Burmental.executeForm(*robot);
	Burmental.executeForm(*robot);

	try
	{
		Burmental.executeForm(*pres);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		PresidentialPardonForm pres = PresidentialPardonForm("Burmental");
		std::cout << pres << std::endl;
		Boss.signForm(pres);
		pres.execute(Burmental);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		PresidentialPardonForm pres = PresidentialPardonForm("Burmental");
		std::cout << pres << std::endl;
		Boss.signForm(pres);
		Burmental.executeForm(pres);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	delete shrub;
	delete pres;
	delete robot;

	return (0);
}