/* 
 * add_program.c
 * Simple addition program demonstrating function usage
 * Author: Garfield Maitland
 * Date: December 16th 2025
 */





/* My 1st arithmetic C program */
/* Can edit in vim or nano. Will have to review vim later */

#include <stdio.h> // Standard Input Output Header

int add(int a, int b); // function prototype/declaration. The compiler needs to see that this function exist

int main(){
	int result = add(5, 3); // function call
	printf("%d\n",result);
	return 0; // explicit success
}

int add(int a, int b){ // defintion
	return a + b;
}
