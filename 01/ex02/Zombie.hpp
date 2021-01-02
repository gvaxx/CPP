//
// Created by Morrec Captain on 1/2/21.
//

#ifndef CPP_ZOMBIE_HPP
#define CPP_ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
    public:

        Zombie(std::string name, std::string type);
        ~Zombie	(void);
        std::string getName(void);
        std::string getType(void);
        void        announce(void);

    private:
        std::string _name;
        std::string _type;
};

#endif //CPP_ZOMBIE_HPP
