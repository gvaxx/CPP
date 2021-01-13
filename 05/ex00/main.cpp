#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat Letual("Letual", 100);
	std::cout << Letual;
	Letual.incrementGrade();
	std::cout << Letual;
	Letual.decrementGrade();
	std::cout << Letual ;

	std::cout << "_____________try create with exceeding\n";

	try
	{
		Bureaucrat Burmental("Burmental", 0);
		std::cout << Burmental;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat Burmental("Burmental", 1000);
		std::cout << Burmental;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "_____________try increment and decrement\n";
	try
	{
		Bureaucrat Burmental("Burmental", 2);
		std::cout << Burmental;
		Burmental.incrementGrade();
		std::cout << Burmental;
		Burmental.incrementGrade();
		std::cout << Burmental;

	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat Burmental("Burmental", 149);
		std::cout << Burmental;
		Burmental.decrementGrade();
		std::cout << Burmental;
		Burmental.decrementGrade();
		std::cout << Burmental;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}