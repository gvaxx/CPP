#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat Burmental("Burmental", 50);
	std::cout << Burmental;

	Form form1("Form-A1", 100, 50);
	std::cout << form1;
	form1.beSigned(Burmental);
	std::cout << form1;

	Form form2("Application", 49, 50);
	std::cout << form2;
	try
	{
		Burmental.signForm(form2);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << form2;

	Form form3("Garbage", 51, 50);
	std::cout << form3;
	Burmental.signForm(form3);
	std::cout << form3;
	try
	{
		Burmental.signForm(form3);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what();
	}

	try
	{
		Form formException("My paper", 152, 50);
		std::cout << formException;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Form formException("My paper", -10, 50);
		std::cout << formException;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Form formException("My paper", 100, -152);
		std::cout << formException;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Form formException("My paper", 100, -10);
		std::cout << formException;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}