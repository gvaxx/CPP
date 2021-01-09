#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy
{
	protected:
		int			_hp;
		std::string	_type;

	public:
		Enemy();
		Enemy( Enemy const & src );
		virtual ~Enemy();

		Enemy(int hp, std::string const & type);
		Enemy &		operator=( Enemy const & rhs );
		std::string virtual	getType() const;
		int					getHP() const;
		virtual void		takeDamage(int);
};

#endif 