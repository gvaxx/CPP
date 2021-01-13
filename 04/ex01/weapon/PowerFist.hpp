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

    virtual ~PowerFist();
    void    attack() const;

};

#endif
