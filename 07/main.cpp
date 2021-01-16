# include <string>
# include <iostream>

int main(int argc, char **argv)
{
//    double d = 2564865464.232423423423423423;
//    float f = 1654864.24324234233243243242344;
//    char c = 46;
    int i = 4;
    (void)argv;
    if(argc == 2)
    {
        std::cout << (char)i << std::endl;
        std::cout << (double)i << std::endl;
        std::cout << (float)i << std::endl;
        std::cout << (int)i << std::endl;
    }
    return (0);
}