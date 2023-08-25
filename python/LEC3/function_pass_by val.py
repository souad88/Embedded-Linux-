def fun(x):
    x=5
    print("inside function",x)
    print("inside function",id(x)) #pass by val
#by val
x=10 #Overwrite the value
print("before function",x)
print("before function",id(x))
fun(x)
print("After function",x)
print("after function",id(x))
print("------")
#by val
x=[10] #pass by Ref
print("before function",x)
print("before function",id(x))
fun(x)
print("After function",x)
print("after function",id(x))
