#include"Convert.hpp"

Convert::Convert() {
}

Convert::Convert(const Convert &src) {
    //this->value = src.value;
}

Convert::Convert(std::string value) {
    this->value = value;
}

Convert::~Convert() {
}

Convert &Convert::operator=(const Convert &src) {
    //this->value = src.value;
    return *this;
}

std::ostream &operator<<(std::ostream &o, Convert const &i) {
    //o << i.getValue;
    return o;
}
