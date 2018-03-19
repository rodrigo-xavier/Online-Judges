/**
 * Problem: 1011 - Sphere
 * 
 * The problem has been resolved using simple mathematics operations
 *
 * By Rodrigo
 */

#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#define pi 3.14159

int main(int argc, char const *argv[])
{
	double sphere_radius, sphere_volume;

	scanf("%lf", &sphere_radius);

	sphere_volume = (4/3.0) * pi * pow(sphere_radius, 3);

	printf("VOLUME = %.3lf\n", sphere_volume);

	system ("PAUSE");
	return 0;
}
