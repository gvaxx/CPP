#include"Convert.hpp"

Convert::Convert() {
}

Convert::Convert(const Convert &src) {
    this->doubleValue = src.doubleValue;
    this->inf = src.inf;
    this->nan = src.nan;
    this->error = src.error;
}

Convert::Convert(char *value)
{
    char *endOfconvert = NULL;
    this->inf = false;
    this->nan = false;
    this->error = false;

    if(isprint(value[0]) && !isdigit(value[0]) && !value[1])
        this->doubleValue = value[0];
    else
    {
        this->doubleValue = strtod(value, &endOfconvert);
        if(errno || (*endOfconvert && (*endOfconvert != 'f' || *(endOfconvert + 1))))
            this->error = true;
    }
    
    if(std::isnan(this->doubleValue))
        this->nan = true;
    if(std::isinf(this->doubleValue))
        this->inf = true;
    // std::cout << this->doubleValue << std::endl;
    // std::cout << this->error << std::endl;
    // std::cout << this->nan << std::endl;
    // std::cout << this->inf << std::endl;
}

int Convert::getInt(void)
{
    if (std::numeric_limits<int>::max() < doubleValue
        || std::numeric_limits<int>::min() > doubleValue
        || nan
        || inf
        || error)
        throw std::invalid_argument("impossible");
    return static_cast<int>(doubleValue);
}

float Convert::getFloat(void)
{
    if (((std::numeric_limits<float>::max() < doubleValue
        || -std::numeric_limits<float>::max() > doubleValue) && !inf)
        || error)
        throw std::invalid_argument("impossible");
    return static_cast<float>(doubleValue);
}

double Convert::getDouble(void)
{
    if (error)
        throw std::invalid_argument("impossible");
    return doubleValue;
}

char Convert::getChar(void)
{
    if (std::numeric_limits<char>::max() < doubleValue
        || std::numeric_limits<char>::min() > doubleValue
        || nan
        || inf
        || error)
        throw std::invalid_argument("impossible");
    
    if (!std::isprint(doubleValue))
        throw std::invalid_argument("Non displayable");
    return doubleValue;
}

Convert::~Convert()
{
}

Convert &Convert::operator=(const Convert &src) {
    this->doubleValue = src.doubleValue;
    return *this;
}

std::ostream &operator<<(std::ostream &o, Convert const &i) {
    (void) i;
    return o;
}
