#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>
# include <string>
# include "ISpaceMarine.hpp"
# include "ISquad.hpp"

class Squad : public ISquad
{

	public:
		Squad();
		Squad( Squad const & src );
		~Squad();

		int				getCount() const;
		ISpaceMarine*	getUnit(int) const;
		int				push(ISpaceMarine*);

		Squad &			operator=( Squad const & rhs );

	private:
		int				_count;
		ISpaceMarine	**_units;
		void			_cpySquad(ISpaceMarine** dest, ISpaceMarine** src);
		bool			_inSquad(ISpaceMarine* unit);
		void			_killUnits();
};

#endif