#ifndef PRESIDENTALPARDONFORM_HPP
# define PRESIDENTALPARDONFORM_HPP

# include <iostream>
# include <string>
# include <fstream>
# include "Form.hpp"

class PresidentialPardonForm: public Form
{
	PresidentialPardonForm();
	std::string 				_target;

	public:
		PresidentialPardonForm( PresidentialPardonForm const & src );
		PresidentialPardonForm &		operator=( PresidentialPardonForm const & rhs );
		PresidentialPardonForm(std::string target);
		virtual ~PresidentialPardonForm();
		std::string	getTarget() const;
		void		execute(Bureaucrat &bureaucrat) const;
};

std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & i );

#endif