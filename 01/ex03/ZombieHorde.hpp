/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 21:21:33 by mcaptain          #+#    #+#             */
/*   Updated: 2021/01/03 21:22:17 by mcaptain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_ZOMBIEHORDE_HPP
#define CPP_ZOMBIEHORDE_HPP

# include <string>
# include <iostream>
# include "Zombie.hpp"
# include <stdexcept>

class ZombieHorde {
public:
            ZombieHorde(int numbers);
            ~ZombieHorde(void);
    Zombie  *newRandomZombie(void);
    void    announce(void);

private:
    Zombie  *horde;
    int     horde_size;
};

#endif //CPP_ZOMBIEHORDE_H
