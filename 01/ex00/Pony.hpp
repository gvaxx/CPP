#ifndef CPP_PONY_HPP
#define CPP_PONY_HPP

# include <string>
# include <iostream>


class Pony {
    public:
                    Pony(void);
                    ~Pony(void);
        void        setPonyName(std::string name);
        void        setPonyColor(std::string color);
        void        setPonyAge(int age);

    private:
        std::string	name;
        std::string	color;
        int         age;
};


#endif //CPP_PONY_HPP
