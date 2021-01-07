#include"PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() {
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &src)
{
}

PlasmaRifle::PlasmaRifle(std::string output_of_attack, std::string const & name, int apcost, int damage)
: AWeapon(std::string const & name, int apcost, int damage), _output_of_attack(output_of_attack)
{
}

PlasmaRifle::~PlasmaRifle() {
}

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &src) {
    //this->value = src.value;
    return *this;
}

std::ostream &operator<<(std::ostream &o, PlasmaRifle const &i) {
    //o << i.getValue;
    return o;
}
