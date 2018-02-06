/**
 * Problem: 1003 - Simple sum
 * 
 * The problem has been resolved using the sum operation, 
 * native to language C++.
 *
 * By Rodrigo
 */

/**
 * Final considerations
 *
 * I'm using the functions scanf and printf instead of cin and cout in C++ 
 * because they perform faster
 *
 * https://profes.com.br/lvirgili/blog/comparando-os-comandos-de-input
 */

#include "cstdio"
#include "cstdlib"

using namespace std;

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
