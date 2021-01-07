#ifndef CPP_PLASMARIFLE_HPP
#define CPP_PLASMARIFLE_HPP


# include <iostream>
# include <string>
# include AWeapon.hpp

class PlasmaRifle :public AWeapon {
    std::string _output_of_attack;
public:
    PlasmaRifle();

    PlasmaRifle(PlasmaRifle const &src);

    PlasmaRifle &operator=(PlasmaRifle const &rhs);

    PlasmaRifle::PlasmaRifle(std::string _output_of_attack, std::string const & name, int apcost, int damage);

    ~PlasmaRifle();
};

std::ostream &operator<<(std::ostream &o, Fool const &i);


#endif //CPP_PLASMARIFLE_HPP
