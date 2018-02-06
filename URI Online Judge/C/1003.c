/**
 * Problem: 1003 - Simple Sum
 * 
 * The problem has been resolved using the sum operation, 
 * native to language C.
 *
 * By Rodrigo
 */

#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[])
{
	int integer_A, integer_B, sum;

	scanf("%d", &integer_A); // Reads the integer value A
	scanf("%d", &integer_B); // Reads the integer value B

	sum = integer_A + integer_B; // Makes the sum between integers A and B

	printf("SOMA = %d\n", sum); // Shows the results

	system ("PAUSE");
	return 0;
}
