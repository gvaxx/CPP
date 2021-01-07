#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Sorcerer
{

public:

    Sorcerer();
    Sorcerer( Sorcerer const & src );
    Sorcerer( std::string name, std::string title);
    ~Sorcerer();

    Sorcerer &		operator=( Sorcerer const & rhs );
    void polymorph(Victim const &) const;
    std::string getTitle() const;
    std::string getName() const;


private:
    std::string _name;
    std::string _title;

};

std::ostream &			operator<<( std::ostream & o, Sorcerer const & i );

#endif