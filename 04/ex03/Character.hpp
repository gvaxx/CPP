#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class Character: public ICharacter
{
	public:

		Character();
		Character( Character const & src );
		Character(std::string const &name);
		virtual ~Character();

		Character &		operator=( Character const & rhs );

		std::string const &	getName() const;
		void				equip(AMateria* m);

		void				unequip(int idx);
		void				use(int idx, ICharacter& target);

	private:
		std::string			_name;
		AMateria*			_materia[4];
		int					_count;
		void				_deleteMateria();

};

std::ostream &			operator<<( std::ostream & o, Character const & i );

#endif