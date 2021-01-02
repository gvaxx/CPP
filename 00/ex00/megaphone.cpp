#include <iostream>
#include <cctype>

void print_upper_str(char *str) {
	for (int i = 0; str[i]; i++)
		std::cout << (char)toupper(str[i]);
}

int	main(int argc, char *argv[]) {
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1; argv[i]; i++)
		print_upper_str(argv[i]);
	std::cout << std::endl;
	return 0;
}
