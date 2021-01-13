#ifndef CPP_CHAINSAW_HPP
#define CPP_CHAINSAW_HPP


# include <iostream>
# include <string>
# include "AWeapon.hpp"

class ChainSaw :public AWeapon {

public:
    ChainSaw();

    ChainSaw(ChainSaw const &src);
    ChainSaw &operator=(ChainSaw const &rhs);

    virtual ~ChainSaw();
    void    attack() const;

};

#endif //CPP_CHAINSAW_HPP
