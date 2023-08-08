#!/usr/bin/python3
#Searching for elements in SET is  faster from list ,because of hash table
#Comparsion between Searching time in list &set 
import time
#creat list
number_list=list(range(1,1000001))
#creat set of numbers
number_set=set(number_list) #copy data from list into set
#search for number in list &calculate consumed time
start_time=time.time()
print(1000000 in number_list)
end_time=time.time()
print("Taken Time to search in list :",end_time-start_time,"Seconds")
#search for number in set &calculate consumed time
start_time=time.time()
print(1000000 in number_set)
end_time=time.time()
print("Taken Time to search in set :",end_time-start_time,"Seconds")

