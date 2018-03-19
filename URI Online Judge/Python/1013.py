#!/usr/bin/python
# -*- coding: utf-8 -*-

import math

""" 
 
 By Rodrigo

"""

def bigger(A, B):
	return int((A + B + abs(A - B))/2)

value = input().split(" ")
A, B, C = int(value[0]), int(value[1]), int(value[2])

bigger_aux = bigger(A, B)
bigger = bigger(bigger_aux, C)

print(bigger, "eh o maior")