#include "static-library-example1.h"
#include "static-library-example2.h"
#include <iostream>

int main(int argc, char const* argv[])
{
    std::cout << "10 + 20 = " << add(10, 20) << std::endl;
    std::cout << "The 20's value of fibonacci sequence is " << Fibonacci(20) << std::endl;
    return 0;
}
