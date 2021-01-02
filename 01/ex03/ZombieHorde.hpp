//
// Created by Morrec Captain on 1/2/21.
//

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
    private:
        Zombie  *horde;
};


#endif //CPP_ZOMBIEHORDE_H
