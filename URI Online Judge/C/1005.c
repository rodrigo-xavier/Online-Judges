/**
 * Problem: 1005 - Simple average
 * 
 * The problem has been resolved using the sum, multiplication and division operations
 *
 * By Rodrigo
 */

#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[])
{
	double note_A, note_B, average;

	scanf("%lf", &note_A); // Reads the note A of the student
	scanf("%lf", &note_B); // Reads the note B of the student

	average = ((note_A * 3.5) + (note_B * 7.5)) / 11.0; // Calculates the weights and makes the average between notes

	printf("MEDIA = %.5lf\n", average); // Shows the results

	system ("PAUSE");
	return 0;
}
