/**
 * Problem: 1004 - Simple product
 * 
 * The problem has been resolved using the product operation, 
 * native to language C.
 *
 * By Rodrigo
 */

#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[])
{
	int integer_A, integer_B, product;

	scanf("%d", &integer_A); // Reads the integer value A
	scanf("%d", &integer_B); // Reads the integer value B

	product = integer_A*integer_B; // Makes the product between integers A and B

	printf("PROD = %d\n", product); // Shows the results

	system ("PAUSE");
	return 0;
}
