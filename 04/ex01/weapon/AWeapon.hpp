#ifndef CPP_AWEAPON_HPP
#define CPP_AWEAPON_HPP


# include <iostream>
# include <string>

class AWeapon {
private:
    AWeapon(AWeapon const &src);
    AWeapon &operator=(AWeapon const &rhs);

    std::string _name;
    int _apcost;
    int _damage;
public:
    AWeapon();AWeapon(std::string const & name, int apcost, int damage);
    virtual ~AWeapon();

    std::string     getName() const;
    int             getAPCost() const;
    int             getDamage() const;
    virtual void    attack() const = 0;
};


#endif 
