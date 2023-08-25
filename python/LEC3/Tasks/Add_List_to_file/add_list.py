mylist=['a','b','c','d','e']
with open('myfile.txt',"w") as myfile: #Add the list to the file when it's opened
    myfile.write("".join(mylist))
content=open('myfile.txt')
print(content.read())    