/**
 * Problem: 1010 - Simple Calculation
 * 
 * The problem has been resolved using a loop of repetition and simple mathematics operations
 *
 * By Rodrigo
 */

#include "stdio.h"
#include "stdlib.h"

int main(int argc, char const *argv[])
{
	int piece_code, number_pieces, i;
	float piece_value, total_payable = 0;

	for (i = 0; i <= 1; i++)
	{
		scanf("%d %d %f", &piece_code, &number_pieces, &piece_value);

		total_payable = total_payable + piece_value*number_pieces;
	}

	printf("VALOR A PAGAR: R$ %.2lf\n", total_payable);

	system ("PAUSE");
	return 0;
}
