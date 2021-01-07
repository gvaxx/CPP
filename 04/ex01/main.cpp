/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 21:02:55 by mcaptain          #+#    #+#             */
/*   Updated: 2021/01/08 00:31:20 by mcaptain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "enemy/Enemy.hpp"
#include "enemy/RadScorpion.hpp"
#include "enemy/SuperMutant.hpp"
#include "weapon/AWeapon.hpp"
#include "weapon/PlasmaRifle.hpp"
#include "weapon/PowerFist.hpp"

int main()
{
    Character* me = new Character("me");
    std::cout << *me;
    Enemy* b = new RadScorpion();
    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();
    me->equip(pr);std::cout << *me;
    me->equip(pf);me->attack(b);
    std::cout << *me;me->equip(pr);
    std::cout << *me;me->attack(b);
    std::cout << *me;me->attack(b);
    std::cout << *me;
return 0;}
