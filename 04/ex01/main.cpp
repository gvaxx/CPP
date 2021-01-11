/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 21:02:55 by mcaptain          #+#    #+#             */
/*   Updated: 2021/01/10 13:28:19 by mcaptain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "enemy/Enemy.hpp"
#include "enemy/RadScorpion.hpp"
#include "enemy/SuperMutant.hpp"
#include "enemy/Terminator.hpp"
#include "weapon/AWeapon.hpp"
#include "weapon/PlasmaRifle.hpp"
#include "weapon/PowerFist.hpp"
#include "weapon/ChainSaw.hpp"

int main()
{
    Character* me = new Character("me");
    std::cout << *me;
    Enemy* b = new RadScorpion();
    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();
    AWeapon* cs = new ChainSaw();
    me->equip(pr);
    std::cout << *me;
    me->equip(pf);
    me->attack(b);
    std::cout << *me;
    me->equip(pr);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;

    std::cout << "*----------------------------------------------------*" << std::endl;
    Enemy *a = new SuperMutant();
    me->attack(a);
    me->attack(a);
    me->attack(a);
    me->attack(a);
    std::cout << *me;
    me->recoverAP();
    me->recoverAP();
    me->recoverAP();
    me->recoverAP();
    me->equip(pf);
    std::cout << *me;
    me->attack(a);
    me->attack(a);
    me->attack(a);
    std::cout << *me;

    std::cout << "*-------------------My classes-----------------------*" << std::endl;
    Enemy *c = new Terminator();
    me->attack(a);
    me->equip(cs);
    me->recoverAP();

    me->attack(a);
    std::cout << *me;

    delete c;
    delete cs;
    delete me;
    delete pr;
    delete pf;
    return 0;
}
