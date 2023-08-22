mylist=["Saturday","Sunday","Monday",["Morning","Evening","Night"],["Embedded-Linux Meeting","Follow Up","C-Project"]]
print(mylist[3]) #index 3 in my list is another list
print(mylist) #print all of the list
print(mylist[4])
print("Day:",mylist[1],"at ",mylist[3][1]," : ",mylist[4][0])
####
#how to delet by Index a specific element
del mylist[3][0]
print(mylist)
#how to remove by Value
mylist[3].remove("Evening")
print(mylist)