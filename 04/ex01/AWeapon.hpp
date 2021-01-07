#ifndef CPP_AWEAPON_HPP
#define CPP_AWEAPON_HPP


# include <iostream>
# include <string>

class AWeapon {
protected:
    std::string _name;
    std::string _apcost;
    std::string _damage;
public:
    AWeapon();
    AWeapon(AWeapon const &src);
    AWeapon &operator=(AWeapon const &rhs);
    AWeapon(std::string const & name, int apcost, int damage);
    ~AWeapon();

    std::string     getName() const;
    int             getAPCost() const;
    int             getDamage() const;
    virtual void    attack() const = 0;
};

std::ostream &operator<<(std::ostream &o, Fool const &i);


#endif /
