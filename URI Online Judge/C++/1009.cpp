/**
 * Problem: 1009 - Salary with bonus
 * 
 * The problem has been resolved using the multiplication and sum operations
 *
 * By Rodrigo
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	char salesman_name[100];
	double salary_fixed, total_sales_amount, bonus, total_salary;

	scanf("%s", salesman_name);
	scanf("%lf", &salary_fixed);
	scanf("%lf", &total_sales_amount);

	bonus = (0.15 * total_sales_amount);
	total_salary = salary_fixed + bonus;

	printf("TOTAL = R$ %.2lf\n", total_salary);

	system ("PAUSE");
	return 0;
}
