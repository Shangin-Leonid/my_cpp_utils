#include <iostream>
#include <string>
#include "../../utils/variadic_print/variadic_print.hpp"


void test_variadic_print(void);
class hello_world;


int main(void)
{
    std::cout << "\nSTART TESTING\n\n";
    
    try{
        test_variadic_print();
    }
    catch( ... ){
        std::cout << "\nUnexpected exception has been caught!\n\n";
    }

    std::cout << "\nEND OF TESTING\n\n";
    return 0;
}


class hello_world
{
    friend std::ostream & operator<<(std::ostream & os, const hello_world & obj)
    { return os << "hello_world"; }
};

void test_variadic_print(void)
{
    char sep_symb;

    int inum = -17;
    double dnum = 3.14;
    hello_world hw;
    float fnum = 3.14;
    std::string str = "std::string object";
    const char * c_str = "c_style_str";

    //std::cout << "Enter the separate symbol: ";
    //std::cin >> sep_symb;
    //variadic_print(sep_symb, inum, dnum, hw, fnum, str, 56, c_str, "abc");

    sep_symb = ' ';
    variadic_print(sep_symb, inum, dnum, hw, fnum, str, 56, c_str, "abc");
   
    sep_symb = '#';
    variadic_print(sep_symb, inum, dnum, hw, fnum, str, 56, c_str, "abc");

    sep_symb = '/';
    variadic_print(sep_symb, inum, dnum, hw, fnum, str, 56, c_str, "abc");

}

