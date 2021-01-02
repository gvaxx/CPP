//
// Created by Morrec Captain on 1/2/21.
//

#ifndef CPP_ZOMBIEEVENT_HPP
#define CPP_ZOMBIEEVENT_HPP


# include <string>
# include <iostream>
# include "Zombie.hpp"

class ZombieEvent {
    public:
                ZombieEvent(void);
                ~ZombieEvent(void);
        void    setZombieType(std::string type);
        Zombie* newZombie(std::string name);
    private:
        std::string _type;
};


#endif //CPP_ZOMBIEEVENT_H
