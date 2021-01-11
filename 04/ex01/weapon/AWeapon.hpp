#ifndef CPP_AWEAPON_HPP
#define CPP_AWEAPON_HPP


# include <iostream>
# include <string>

class AWeapon {
private:
    std::string _name;
    int         _apcost;
    int         _damage;
public:
    AWeapon();AWeapon(std::string const & name, int apcost, int damage);
    virtual ~AWeapon();
    AWeapon(AWeapon const &src);
    AWeapon &operator=(AWeapon const &rhs);

    std::string     getName() const;
    int             getAPCost() const;
    int             getDamage() const;

    void            setName(std::string name);
    void            setAPCost(int apcost);
    void            setDamage(int damage);
    virtual void    attack() const = 0;
};


#endif 
