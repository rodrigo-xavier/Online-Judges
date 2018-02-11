""" 
 Problem: 1009 - Salary with bonus
 
 The problem has been resolved using the multiplication and sum operations

 By Rodrigo

 """

salesman_name = input()
salary_fixed = float(input())
total_sales_amount = float(input())

bonus = 0.15 * total_sales_amount
total_salary = salary_fixed + bonus

print("TOTAL = R$ %.2f" %total_salary);