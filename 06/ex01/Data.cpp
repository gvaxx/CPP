#include "Data.hpp"
# include <iostream>

void *serialize(void)
{
	std::string array =	"abcdefghijklmopqrstuvxyzABCDEFGHIJKLMOPQRSTUVXYZ0123456789";
	void *raw;

	raw = new char[20];

    std::cout << "______________serialize_____________\n";
    std::cout << "str1: ";
	for (int i = 0; i < 8; i++)
	{
		char c = array[rand() % array.length()];
		reinterpret_cast<char *>(raw)[i] = c;
		std::cout << c;
	}
	std::cout << std::endl;
    std::cout << "n:    ";
	int i = rand();
	std::cout << i << std::endl;
	reinterpret_cast<int*>(raw)[2] = i;
    std::cout << "str2: ";
	for (int i = 0; i < 8; i++)
	{
		char c = array[rand() % array.length()];
		reinterpret_cast<char *>(raw)[i + 12] = c;
		std::cout << c;
	}
	std::cout << std::endl;
	return (raw);
}

Data *deserialize(void *raw)
{
	Data *d = new Data;

	d->s1 = std::string(static_cast<char*>(raw), 8);
	d->n = *reinterpret_cast<int*>(static_cast<char*>(raw) + 8);
	d->s2 = std::string(static_cast<char*>(raw) + 12, 8);
	return (d);
}