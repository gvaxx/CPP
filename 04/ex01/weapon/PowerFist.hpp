#ifndef CPP_POWERFIST_HPP
#define CPP_POWERFIST_HPP


# include <iostream>
# include <string>
# include "AWeapon.hpp"

class PowerFist :public AWeapon {
public:
    PowerFist();

    PowerFist(PowerFist const &src);

    PowerFist &operator=(PowerFist const &rhs);

    ~PowerFist();
    void    attack() const;

};

std::ostream &operator<<(std::ostream &o, PowerFist const &i);


#endif //CPP_POWERFIST_HPP
