mylist=["Saturday","Sunday","Monday",["Morning","Evening","Night"],["Embedded-Linux Meeting","Follow Up","C-Project"]]
#how to delet by Index a specific element
del mylist[3][0]
print(mylist)
#how to remove by Value
mylist[3].remove("Evening")
print(mylist)