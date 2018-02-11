/**
 * Problem: 1008 - Salary
 * 
 * The problem has been resolved using the multiplication operations
 *
 * By Rodrigo
 */

#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[])
{
	int functionary_number, worked_hours;
	float hourly_rate, salary;

	scanf("%d", &functionary_number); 	// Reads the functionary number
	scanf("%d", &worked_hours); 		// Reads the worked hours
	scanf("%f", &hourly_rate);			// Reads the hourly rate

	salary = hourly_rate * worked_hours; // Computes the employee's salary

	printf("NUMBER = %d\n", functionary_number); 	// Show the functionary number
	printf("SALARY = U$ %.2f\n", salary);			// Show the employee's salary

	system ("PAUSE");
	return 0;
}
