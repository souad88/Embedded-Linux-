#!/usr/bin/python3
#tuple :Immutable : you cannot change in it
ls=("ddddd",3.4,5.6,8,-1)
print(ls[0:2])
ls[1]=5555
print(ls[0])
print(ls[1,3,2]) #jump 2 index steps
print(ls[2:])
print(ls[-1])
print(ls[-2])
print(ls[1,4])