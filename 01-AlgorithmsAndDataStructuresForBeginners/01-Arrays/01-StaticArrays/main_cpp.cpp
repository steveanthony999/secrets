/*
    To compile and run, in the terminal, type:
        g++ main_cpp.cpp -o main_cpp
    After compilation, in the terminal, type:
        ./main_cpp
*/

#include <stdio.h>
#include <iostream>

int main() {
    int myArray[] = {1,3,5};

    std::cout << myArray[0] << std::endl; // Prints 1
    std::cout << myArray[1] << std::endl; // Prints 3
    std::cout << myArray[2] << std::endl; // Prints 5
    // std::cout << myArray[3] << std::endl; // Compiles with warning, prints value from unknown memory location.  DON'T DO!!
}