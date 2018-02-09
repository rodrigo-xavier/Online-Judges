""" 
 Problem: 1006 - Average 2
 
 The problem has been resolved using the sum, multiplication and division operations

 By Rodrigo

"""

note_A = float(input()) # Reads the note A of the student
note_B = float(input()) # Reads the note B of the student
note_C = float(input()) # Reads the note C of the student

average = ((note_A * 2) + (note_B * 3) + (note_C * 5)) / 10.0; # Calculates the weights and makes the average between notes

print("MEDIA = %.1f" %average) # Shows the results