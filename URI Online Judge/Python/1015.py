#!/usr/bin/python
# -*- coding: utf-8 -*-

""" 
 
 By Rodrigo

"""

point_1 = input().split(" ")
point_2 = input().split(" ")

X1, Y1 = float(point_1[0]), float(point_1[1])
X2, Y2 = float(point_2[0]), float(point_2[1])

distance = ((X2 - X1)**2 + (Y2 - Y1)**2)**(1/2)
print("%.4f" %distance)