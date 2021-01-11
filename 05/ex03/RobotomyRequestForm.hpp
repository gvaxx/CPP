#ifndef ROBOTOMEREQUESTFORM_HPP
# define ROBOTOMEREQUESTFORM_HPP

# include <iostream>
# include <string>
# include <fstream>
# include "Form.hpp"

class RobotomyRequestForm: public Form
{
	RobotomyRequestForm();
	std::string 				_target;

	public:
		RobotomyRequestForm( RobotomyRequestForm const & src );
		RobotomyRequestForm &		operator=( RobotomyRequestForm const & rhs );
		RobotomyRequestForm(std::string target);
		virtual ~RobotomyRequestForm();
		std::string	getTarget() const;
		void		execute(Bureaucrat &bureaucrat) const;
};

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i );

#endif