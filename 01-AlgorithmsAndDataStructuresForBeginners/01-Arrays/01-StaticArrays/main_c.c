/*
    To compile and run, in the terminal, type:
        gcc main_c.c -o main_c
    After compilation, in the terminal, type:
        ./main_c
*/

#include <stdio.h>

int main() {
    int myArray[3] = {1,3,5};

    printf("%d\n", myArray[0]); // Prints 1
    printf("%d\n", myArray[1]); // Prints 3
    printf("%d\n", myArray[2]); // Prints 5
    // printf("%d\n", myArray[3]); // Compiler error: array index 3 is past the end of the array, but still access an unknown memory location
    return 0;
}