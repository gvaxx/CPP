#ifndef CPP_CONVERT_HPP
#define CPP_CONVERT_HPP

# include <iostream>
# include <string>
# include <cmath>

class Convert {
    double doubleValue;
    bool error;
    bool nan;
    bool inf;
public:
    Convert();

    Convert(Convert const &src);
    Convert(char *value);

    Convert &operator=(Convert const &rhs);

    ~Convert();
    int     getInt(void);
    float   getFloat(void);
    double  getDouble(void);
    char    getChar(void);


};

std::ostream &operator<<(std::ostream &o, Convert const &i);


#endif //CPP_CONVERT_HPP
