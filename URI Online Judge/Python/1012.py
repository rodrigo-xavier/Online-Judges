#!/usr/bin/python
# -*- coding: utf-8 -*-

import math

""" 
 

 By Rodrigo

 """

class Area(object):
	def triangle(A, C):
		area = (A * C)/2
		return area

	def circle(C, pi):
		area = pi * (C**2)
		return area

	def trapeze(A, B, C):
		area = ((A + B) * C)/2
		return area

	def square(B):
		area = B**2
		return area

	def rectangle(A, B):
		area = A * B
		return area		

value = input().split(" ")
A, B, C = float(value[0]), float(value[1]), float(value[2])
pi = 3.14159	

print("TRIANGULO: %.3f" %(Area.triangle(A, C)))
print("CIRCULO: %.3f" %(Area.circle(C, pi)))
print("TRAPEZIO: %.3f" %(Area.trapeze(A, B, C)))
print("QUADRADO: %.3f" %(Area.square(B)))
print("RETANGULO: %.3f" %(Area.rectangle(A, B)))