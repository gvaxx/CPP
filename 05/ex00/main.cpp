#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat francis("Francis", 100);
	std::cout << francis;
	francis.incrementGrade();
	std::cout << francis;
	francis.decrementGrade();
	std::cout << francis ;

	std::cout << "_____________try create with exceeding\n";

	try
	{
		Bureaucrat jack("Jack", 0);
		std::cout << jack;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat jack("Jack", 1000);
		std::cout << jack;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "_____________try increment and decrement\n";
	try
	{
		Bureaucrat jack("Jack", 2);
		std::cout << jack;
		jack.incrementGrade();
		std::cout << jack;
		jack.incrementGrade();
		std::cout << jack;

	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat jack("Jack", 149);
		std::cout << jack;
		jack.decrementGrade();
		std::cout << jack;
		jack.decrementGrade();
		std::cout << jack;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}