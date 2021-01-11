#ifndef CPP_CHAINSAW_HPP
#define CPP_CHAINSAW_HPP


# include <iostream>
# include <string>
# include "AWeapon.hpp"

class ChainSaw :public AWeapon {
    ChainSaw(ChainSaw const &src);
    ChainSaw &operator=(ChainSaw const &rhs);

public:
    ChainSaw();

    virtual ~ChainSaw();
    void    attack() const;

};

#endif //CPP_CHAINSAW_HPP
