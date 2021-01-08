#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{

	public:
		MateriaSource();
		MateriaSource( MateriaSource const & src );
		~MateriaSource();

		MateriaSource &		operator=( MateriaSource const & rhs );
		void				learnMateria(AMateria*);
		AMateria*			createMateria(std::string const & type);
	private:
		AMateria			*_allMateria[4];
		int					_countMateria;
		int					_findMateria(std::string const & type);
		AMateria**			_cloneAllMateria(void);
		void				_deleteMateria(void);

};

std::ostream &			operator<<( std::ostream & o, MateriaSource const & i );

#endif