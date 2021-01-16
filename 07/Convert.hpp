#ifndef CPP_CONVERT_HPP
#define CPP_CONVERT_HPP


# include <iostream>
# include <string>

class Convert {
    std::string value;
public:
    Convert();

    Convert(Convert const &src);

    Convert &operator=(Convert const &rhs);

    Convert(std::string value);

    ~Convert();
};

std::ostream &operator<<(std::ostream &o, Fool const &i);


#endif //CPP_CONVERT_HPP
