""" 
 Problem: 1008 - Salary
 
 The problem has been resolved using the multiplication operations

 By Rodrigo

 """

functionary_number = int(input()) 	# Reads the functionary number
worked_hours = int(input()) 		# Reads the worked hours
hourly_rate = float(input())		# Reads the hourly rate

salary = worked_hours * hourly_rate # Computes the employee's salary

print("NUMBER =", functionary_number); 	# Show the functionary number
print("SALARY = U$ %.2f" %salary);		# Show the employee's salary