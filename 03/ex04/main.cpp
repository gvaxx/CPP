/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 21:02:55 by mcaptain          #+#    #+#             */
/*   Updated: 2021/01/08 16:37:02 by mcaptain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"
#include "SuperTrap.hpp"

int	main(void)
{
	srand(time(NULL));

    // FragTrap ourFTrap("Jorge");
    // ourFTrap.rangedAttack("little wolf");
    // ourFTrap.meleeAttack("grandma's chair");
    // ourFTrap.vaulthunter_dot_exe("little wolf");
    // ourFTrap.vaulthunter_dot_exe("little wolf");
    // ourFTrap.vaulthunter_dot_exe("little wolf");
    // ourFTrap.vaulthunter_dot_exe("little wolf");
    // ourFTrap.vaulthunter_dot_exe("little wolf");
    // ourFTrap.vaulthunter_dot_exe("little wolf");
    // ourFTrap.takeDamage(25);
    // ourFTrap.takeDamage(25);
    // ourFTrap.takeDamage(25);
    // ourFTrap.takeDamage(25);
    // ourFTrap.beRepaired(25);
    // ourFTrap.beRepaired(25);
    // ourFTrap.beRepaired(25);
    // ourFTrap.beRepaired(25);
    // ourFTrap.beRepaired(25);

    // ScavTrap ourSTrap("Jorah");
    // ourSTrap.rangedAttack("little wolf");
    // ourSTrap.meleeAttack("grandma's chair");
    // ourSTrap.challengeNewcomer();
    // ourSTrap.challengeNewcomer();
    // ourSTrap.challengeNewcomer();
    // ourSTrap.takeDamage(25);
    // ourSTrap.takeDamage(25);
    // ourSTrap.takeDamage(25);
    // ourSTrap.takeDamage(25);
    // ourSTrap.beRepaired(25);
    // ourSTrap.beRepaired(25);
    // ourSTrap.beRepaired(25);
    // ourSTrap.beRepaired(25);
    // ourSTrap.beRepaired(25);

    // NinjaTrap ourNTrap("samuro");
    // ClapTrap ourCTrap("clap");
    // ourNTrap.rangedAttack("little wolf");
    // ourNTrap.meleeAttack("grandma's chair");
    // ourNTrap.ninjaShoebox(ourNTrap);
    // ourNTrap.ninjaShoebox(ourCTrap);
    // ourNTrap.ninjaShoebox(ourSTrap);
    // ourNTrap.ninjaShoebox(ourFTrap);

    SuperTrap ourSupTrap("Claus");
    ourSupTrap.rangedAttack("little wolf");
    ourSupTrap.meleeAttack("Grandma's chair");
    // ourSupTrap.ninjaShoebox(ourCTrap);
    ourSupTrap.vaulthunter_dot_exe("little wolf");
    return 0;
}
