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
    char str[] = "bc4dfse3a7f9e2d1c8b6a5e4f3d2c1b0a9e8d7c6" 

}

