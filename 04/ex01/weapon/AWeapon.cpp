#include"AWeapon.hpp"

AWeapon::AWeapon() {
}

AWeapon::AWeapon(const AWeapon &src)
{
    this->_name = src._name;
    this->_apcost = src._apcost;
    this->_damage = src._damage;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
: _name(name), _apcost(apcost), _damage(damage)
{
}

AWeapon::~AWeapon(){}

AWeapon &AWeapon::operator=(const AWeapon &src)
{
    this->_name = src._name;
    this->_apcost = src._apcost;
    this->_damage = src._damage;

    return *this;
}

std::string     AWeapon::getName() const
{
    return this->_name;
}

int             AWeapon::getAPCost() const
{
    return this->_apcost;
}

int             AWeapon::getDamage() const
{
    return this->_damage;
}