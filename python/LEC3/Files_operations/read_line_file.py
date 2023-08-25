#open the file
text_file = open("/home/souad/Desktop/GitHub_/Embedded-Linux-/python/LEC3/x.txt","r")

#read each line
lines_in_file = text_file.readlines()

#loop in every line
for line in lines_in_file:
    print(line) #print every line

text_file.close() #close the file
