/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 20:55:10 by mcaptain          #+#    #+#             */
/*   Updated: 2021/01/03 21:00:41 by mcaptain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_ZOMBIEEVENT_HPP
#define CPP_ZOMBIEEVENT_HPP

# include <string>
# include <iostream>
# include "Zombie.hpp"

class ZombieEvent {
public:
                ZombieEvent(void);
                ~ZombieEvent(void);
    void        setZombieType(std::string type);
    Zombie*     newZombie(std::string name);
private:
    std::string _type;
};

#endif
