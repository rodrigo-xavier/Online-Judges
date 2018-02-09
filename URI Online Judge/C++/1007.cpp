/**
 * Problem: 1007 - Difference
 * 
 * The problem has been resolved using the sum, multiplication and subtration operations
 *
 * By Rodrigo
 */

#include "cstdio"
#include "cstdlib"

using namespace std;

int main(int argc, char const *argv[])
{
	int integer_A, integer_B, integer_C, integer_D, difference;

	scanf("%d", &integer_A); // Reads the integer A
	scanf("%d", &integer_B); // Reads the integer B
	scanf("%d", &integer_C); // Reads the integer C
	scanf("%d", &integer_D); // Reads the integer D

	difference = integer_A * integer_B - integer_C * integer_D; // Computes the difference between products

	printf("DIFERENCA = %d\n", difference); // Shows the results

	system ("PAUSE");
	return 0;
}
