#include"Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) {
    //this->value = src.value;
}

Bureaucrat::Bureaucrat(std::string value) {
    this->value = value;
}

Bureaucrat::~Bureaucrat() {
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src) {
    //this->value = src.value;
    return *this;
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &i) {
    //o << i.getValue;
    return o;
}
