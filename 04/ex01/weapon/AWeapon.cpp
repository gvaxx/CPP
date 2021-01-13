#include"AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
: _name(name), _apcost(apcost), _damage(damage)
{
}

AWeapon::~AWeapon(){}

AWeapon::AWeapon(AWeapon const &src)
: _name(src._name), _apcost(src._apcost), _damage(src._damage)
{
}

AWeapon & AWeapon::operator=(AWeapon const &rhs)
{
    this->_name = rhs._name;
    this->_apcost = rhs._apcost;
    this->_damage = rhs._damage;
    return (*this);
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

void            AWeapon::setName(std::string name)
{
    this->_name = name;
}

void             AWeapon::setAPCost(int apcost)
{
    this->_apcost = apcost;
}

void             AWeapon::setDamage(int damage)
{
    this->_damage = damage;
}