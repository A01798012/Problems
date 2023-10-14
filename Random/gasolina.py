#!/usr/bin/env python3


data = input()

array = data.split(sep = " ")


array = [int(i) for i in array]

L,N,l,m,w,j,v,s,d=array

final = []
aux = 0

for i in range(7):
    if(i == 0):
        final.append(L - N*array[i+2])
    else:
        final.append(L - N*array[i+2] + final[i - 1])

print(final)
