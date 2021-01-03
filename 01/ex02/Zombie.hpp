/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 20:59:34 by mcaptain          #+#    #+#             */
/*   Updated: 2021/01/03 20:59:36 by mcaptain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
