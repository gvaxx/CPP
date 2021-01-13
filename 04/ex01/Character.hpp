#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "enemy/Enemy.hpp"
# include "weapon/AWeapon.hpp"

class Character
{
	private:
		std::string	_name;
		int			_ap;
		AWeapon 	*_weapon;
		Character();

	public:
		Character( Character const & src );
		Character(std::string const & name);

		~Character();
		
		void		recoverAP();
		void		equip(AWeapon*);
		void		attack(Enemy*);

		std::string getName() const;
		int			getAP() const;
		AWeapon 	*getWeapon() const;

		Character &	operator=( Character const & rhs );
};

std::ostream &		operator<<( std::ostream & o, Character const & i );

#endif