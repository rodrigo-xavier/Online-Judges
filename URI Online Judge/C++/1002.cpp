/**
 * Problem: 1002 - Circle area
 * 
 * The problem has been resolved using the multiply operation, 
 * native to language C++ and as requested by the problem double precision.
 *
 * By Rodrigo
 */

/**
 * Final considerations 1.0
 *
 * I not have included the library cmath because the problem 
 * could be solved using a simple multiplication, and therefore 
 * include a library makes the compilation more time-consuming
 */

/**
 * Final considerations 2.0
 *
 * I'm using the functions scanf and printf instead of cin and cout in C++ 
 * because they perform faster
 *
 * https://profes.com.br/lvirgili/blog/comparando-os-comandos-de-input
 */

#include "cstdio"
#include "cstdlib"
#define pi 3.14159

using namespace std;

int main(int argc, char const *argv[])
{
	double area, radius;

	scanf("%lf", &radius); // Reads the value of the radius

	area = radius*radius*pi; // Calculates the area of the circle

	printf("A=%.4f\n", area); // Shows the results

	system ("PAUSE");
	return 0;
}
