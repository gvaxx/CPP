# include <string>
# include <iostream>
#include "Convert.hpp"

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        Convert value(argv[1]);
        std::string str = argv[1];
        std::cout << std::fixed;
        size_t pos = 0;
        if((pos = str.find(".")) == std::string::npos)
            std::cout.precision(1);
        else {
            size_t precision = str.length() - pos - 1;
            std::cout.precision(precision > 5 ? 5 : precision);
        }
        try{
            std::cout << "char: " << value.getChar() << std::endl;
        }
        catch(std::exception &e){
            std::cout << e.what() << std::endl;
        }
        try{
            std::cout << "int: " << value.getInt() << std::endl;
        }
        catch(std::exception &e){
            std::cout << e.what() << std::endl;
        }
        try{
            std::cout << "float: ";
            float f = value.getFloat();
            if(std::numeric_limits<float>::infinity() == f)
                std::cout << "+";
            std::cout << f << "f" << std::endl;
        }
        catch(std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
        try{
            std::cout << "double: ";
            double d = value.getDouble();
            if(std::numeric_limits<double>::infinity() == d)
                std::cout << "+";
            std::cout << d << std::endl;
        }
        catch(std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
        // std::cout << (float)i << std::endl;
        // std::cout << (int)i << std::endl;
    }
    return (0);
}