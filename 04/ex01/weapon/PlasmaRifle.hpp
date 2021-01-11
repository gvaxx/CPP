#ifndef CPP_PLASMARIFLE_HPP
#define CPP_PLASMARIFLE_HPP


# include <iostream>
# include <string>
# include "AWeapon.hpp"

class PlasmaRifle :public AWeapon {
    PlasmaRifle(PlasmaRifle const &src);
    PlasmaRifle &operator=(PlasmaRifle const &rhs);

public:
    PlasmaRifle();

    virtual ~PlasmaRifle();
    void    attack() const;

};

#endif //CPP_PLASMARIFLE_HPP
