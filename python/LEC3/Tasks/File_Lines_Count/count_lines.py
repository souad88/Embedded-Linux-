file1=open("myfile.txt","r")
list1=file1.readlines()
print(len(list1))
###Another way##################3
line_number=0
file2=open("myfile2.txt","r")
list2 = file2.readlines()
#loop in every line
for line in list2:
    #print(line) #print every line
    line_number=line_number+1 #increase Counter
print(line_number)
file2.close() #close the file
