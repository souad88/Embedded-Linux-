list1=[1,23,4,5,6,7,8]
#list2=list1 -->it will leads to shallow clone
#shallow clone : if element changed in list2 , also the same index will be changed in list1
#how to copy list1 into list2 without shallow clone
list2=list1.copy()
list2[2]=3333
print(list2)
print(list1)
####
