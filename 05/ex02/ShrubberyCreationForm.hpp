#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm: public Form
{
	ShrubberyCreationForm();
	std::string 				_target;

	public:
		ShrubberyCreationForm( ShrubberyCreationForm const & src );
		ShrubberyCreationForm &		operator=( ShrubberyCreationForm const & rhs );
		ShrubberyCreationForm(std::string target);
		virtual ~ShrubberyCreationForm();
		std::string	getTarget() const;
		void		execute(Bureaucrat &bureaucrat) const;
};

std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & i );

#endif