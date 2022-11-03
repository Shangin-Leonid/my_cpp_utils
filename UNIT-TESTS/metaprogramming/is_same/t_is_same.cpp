#include <iostream>

#include "../../../utils/metaprogramming/is_same.hpp"

int main(void)
{
    std::cout << "\nSTART TESTING\n\n";


    std::cout << mcu::is_same(42, -1 , "hello world!");
    std::cout << mcu::is_same("", " ", "hello world!");

    std::cout << "\n\nEND TESTING\n";
    return 0;
}

