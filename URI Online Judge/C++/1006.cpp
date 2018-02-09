/**
 * Problem: 1006 - Average 2
 * 
 * The problem has been resolved using the sum, multiplication and division operations
 *
 * By Rodrigo
 */

#include "cstdio"
#include "cstdlib"

using namespace std;

int main(int argc, char const *argv[])
{
	double note_A, note_B, note_C, average;

	scanf("%lf", &note_A); // Reads the note A of the student
	scanf("%lf", &note_B); // Reads the note B of the student
	scanf("%lf", &note_C); // Reads the note C of the student

	average = ((note_A * 2) + (note_B * 3) + (note_C * 5)) / 10.0; // Calculates the weights and makes the average between notes

	printf("MEDIA = %.1lf\n", average); // Shows the results

	system ("PAUSE");
	return 0;
}
