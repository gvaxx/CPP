#ifndef CPP_AWEAPON_HPP
#define CPP_AWEAPON_HPP


# include <iostream>
# include <string>

class AWeapon {
protected:
    std::string _name;
    int _apcost;
    int _damage;
public:
    AWeapon();
    AWeapon(AWeapon const &src);
    AWeapon &operator=(AWeapon const &rhs);
    AWeapon(std::string const & name, int apcost, int damage);
    virtual ~AWeapon();

    std::string     getName() const;
    int             getAPCost() const;
    int             getDamage() const;
    virtual void    attack() const = 0;
};


#endif 
