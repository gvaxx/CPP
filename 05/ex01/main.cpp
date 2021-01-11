#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat francis("Francis", 100);
	std::cout << francis;

	Form form1("Taxes", 100, 50);
	std::cout << form1;
	form1.beSigned(francis);
	std::cout << form1;

	std::cout << "---" << std::endl;

	Form form2("NDA", 99, 50);
	std::cout << form2;
	try
	{
		francis.signForm(form2);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << form2 ;

	std::cout << "---" << std::endl;

	Form form3("Other Paper", 101, 50);
	std::cout << form3;
	francis.signForm(form3);
	std::cout << form3;
	try
	{
		francis.signForm(form3);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what();
	}
	std::cout << form3;

	std::cout << "---" << std::endl;

	try
	{
		Form formException("Important Form", 1000, 50);
		std::cout << formException;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "---" << std::endl;

	try
	{
		Form formException("Important Form", 0, 50);
		std::cout << formException;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "---" << std::endl;

	try
	{
		Form formException("Important Form", 100, 1000);
		std::cout << formException;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "---" << std::endl;

	try
	{
		Form formException("Important Form", 100, 0);
		std::cout << formException;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}