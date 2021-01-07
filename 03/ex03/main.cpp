/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 21:02:55 by mcaptain          #+#    #+#             */
/*   Updated: 2021/01/06 17:20:44 by mcaptain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"

int	main(void)
{

    FragTrap ourFTrap("Jorge");
    ourFTrap.rangedAttack("little wolf");
    ourFTrap.meleeAttack("grandma's chair");
    ourFTrap.vaulthunter_dot_exe("little wolf");
    ourFTrap.vaulthunter_dot_exe("little wolf");
    ourFTrap.vaulthunter_dot_exe("little wolf");
    ourFTrap.vaulthunter_dot_exe("little wolf");
    ourFTrap.vaulthunter_dot_exe("little wolf");
    ourFTrap.vaulthunter_dot_exe("little wolf");
    ourFTrap.takeDamage(25);
    ourFTrap.takeDamage(25);
    ourFTrap.takeDamage(25);
    ourFTrap.takeDamage(25);
    ourFTrap.beRepaired(25);
    ourFTrap.beRepaired(25);
    ourFTrap.beRepaired(25);
    ourFTrap.beRepaired(25);
    ourFTrap.beRepaired(25);

    ScavTrap ourSTrap("Jorah");
    ourSTrap.rangedAttack("little wolf");
    ourSTrap.meleeAttack("grandma's chair");
    ourSTrap.challengeNewcomer();
    ourSTrap.challengeNewcomer();
    ourSTrap.challengeNewcomer();
    ourSTrap.takeDamage(25);
    ourSTrap.takeDamage(25);
    ourSTrap.takeDamage(25);
    ourSTrap.takeDamage(25);
    ourSTrap.beRepaired(25);
    ourSTrap.beRepaired(25);
    ourSTrap.beRepaired(25);
    ourSTrap.beRepaired(25);
    ourSTrap.beRepaired(25);

    NinjaTrap ourNTrap("samuro");
    ClapTrap ourCTrap("clap");
    ourNTrap.ninjaShoebox(ourNTrap);
    ourNTrap.ninjaShoebox(ourCTrap);
    ourNTrap.ninjaShoebox(ourSTrap);
    ourNTrap.ninjaShoebox(ourFTrap);
    return 0;
}
