/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 21:02:55 by mcaptain          #+#    #+#             */
/*   Updated: 2021/01/05 23:19:35 by mcaptain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
    FragTrap ourTrap("Jorge");
    ourTrap.rangedAttack("little wolf");
    ourTrap.meleeAttack("grandma's chair");
    ourTrap.vaulthunter_dot_exe("little wolf");
    ourTrap.vaulthunter_dot_exe("little wolf");
    ourTrap.vaulthunter_dot_exe("little wolf");
    ourTrap.vaulthunter_dot_exe("little wolf");
    ourTrap.vaulthunter_dot_exe("little wolf");
    ourTrap.vaulthunter_dot_exe("little wolf");
    ourTrap.takeDamage(25);
    ourTrap.takeDamage(25);
    ourTrap.takeDamage(25);
    ourTrap.takeDamage(25);
    ourTrap.beRepaired(25);
    ourTrap.beRepaired(25);
    ourTrap.beRepaired(25);
    ourTrap.beRepaired(25);
    ourTrap.beRepaired(25);
    return 0;
}
