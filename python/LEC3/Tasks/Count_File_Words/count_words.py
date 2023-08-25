f=open("myfile.text","r")
word_numbers=f.read() #Hint: we used here [read()] not [readline()]
print(len(word_numbers.split()))
print(word_numbers.split()) #Hint :this function prints every word