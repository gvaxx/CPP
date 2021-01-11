#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy
{
		int			_hp;
		std::string	_type;
		Enemy();
		Enemy( Enemy const & src );
		Enemy &		operator=( Enemy const & rhs );

	public:
		virtual ~Enemy();

		Enemy(int hp, std::string const & type);
		std::string virtual	getType() const;
		int					getHP() const;
		virtual void		takeDamage(int);
};

#endif 