/* 
 * strlen_ptr.c
 * My custom pointer based string length function
 * Author: Garfield Maitland
 * Date: December 17th 2025
 */

#include <stdio.h>
#include <stddef.h> // for size_t type

/* It is important to declare the fuction prior to calling the
    function. Else the compiler will not be able to compile the
    program efficiently or at all.
*/
size_t my_strlen(const char *str) {
    const char *s = str;

    while (*s) {
        s++;
    }

    return s - str;
}

int main() {
    // 40 character sha-1 hexanumeric git commit hash
    char str[] = "bc4dfse3a7f9e2d1c8b6a5e4f3d2c1b0a9e8d7c6";
    
    printf("String: %\n", str);
    // % indicates the start of a format specifier
    // z is a length modifier that is "size-aware" for different system architecures (32/64 bit)
    // u means the value is an unsigned decimal integer
    printf("Length: %zu\n", my_strlen(str))

    // We return 0 to indicate the program execute successfully
    // Non-zero values like return 1 or return -1, indicates an error,failue, or abnormal termination
    return 0;
}

