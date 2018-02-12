""" 
 Problem: 1010 - Simple Calculation
 
 The problem has been resolved using a loop of repetition and simple mathematics operations

 By Rodrigo

 """

total_payable = 0

for i in range(0,2):
	piece_code, number_pieces, piece_value = input().split(" ")
	total_payable = total_payable + (float (piece_value)) * (int (number_pieces))

print("VALOR A PAGAR: R$ %.2lf" %total_payable);