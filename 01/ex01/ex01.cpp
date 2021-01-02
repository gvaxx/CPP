//
// Created by Morrec Captain on 1/2/21.
//
# include <iostream>
# include <cctype>
# include <string>

void memoryLeak()
{
    std::string panther = "String panther";
    std::cout << panther << std::endl;
}

int main()
{
    memoryLeak();
}