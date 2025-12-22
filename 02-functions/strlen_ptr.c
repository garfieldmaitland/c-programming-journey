/* 
 * strlen_ptr.c
 * My custom pointer based string length function
 * Author: Garfield Maitland
 * Date: December 17th 2025
 */

#include <stdio.h>

/* It is important to declare the fuction prior to calling the
    function. Else the compiler will not be able to compile the
    program efficiently or at all.
*/

int my_strlen_ptr(char *str) {
    char *ptr = str;

    // Advance pointer null terminator
    while (*ptr != '\0') {
        ptr++;
    }

    return ptr - str; // This is the distance between the start and the current position
}

int main() {
    // 40 character sha-1 hexanumeric git commit hash
    char str[] = "bc4dfse3a7f9e2d1c8b6a5e4f3d2c1b0a9e8d7c6";
    
    // % indicates the start of a format specifier
    printf("Using my_strlen_ptr: %d\n", my_strlen_ptr(str));

    // We return 0 to indicate the program execute successfully
    // Non-zero values like return 1 or return -1, indicates an error,failue, or abnormal termination condition
    return 0;
}

