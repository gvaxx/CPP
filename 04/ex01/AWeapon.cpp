#include"AWeapon.hpp"

AWeapon::AWeapon() {
}

AWeapon::AWeapon(const AWeapon &src)
{
    this->_name = src._name;
    this->_apcost = src._apcost;
    this->_damage = src._damage;
}
AWeapon(std::string const & name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage)
{
}

AWeapon::~AWeapon()
{
}

AWeapon::operator=(const AWeapon &src)
{
    this->_name = src._name;
    this->_apcost = src._apcost;
    this->_damage = src._damage;

    return *this;
}

std::ostream &operator<<(std::ostream &o, AWeapon const &i)
{
    //o << i.getValue;
    return o;
}


std::string     AWeapon::getName() const
{
    return this->name;
}

int             AWeapon::getAPCost() const
{
    return this->apcost;
}

int             getDamage() const;
virtual void    attack() const = 0;