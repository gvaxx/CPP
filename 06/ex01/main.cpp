#include "Data.hpp"

int main(void)
{
	srand(time(0));

    void *raw = serialize();
    Data *dt = deserialize(raw);

    std::cout << "______________deserialize_____________\n";
    std::cout << "str1: " << dt->s1 << '\n';
    std::cout << "n:    " << dt->n << '\n';
    std::cout << "str2: " << dt->s2 << '\n';

    delete static_cast<char*>(raw);
    delete dt;

	return (0);
}