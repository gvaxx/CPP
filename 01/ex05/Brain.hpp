#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <sstream>
# include <iomanip>
# include <string>

class Brain
{
	public:
		Brain();
		~Brain();

		std::string identify(void) const;
		void		setAddress(void);
	private:
		std::string _address;
};

#endif