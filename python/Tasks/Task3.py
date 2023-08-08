#Access Environment Variables [OS,Path]
import os
path=os.environ['PATH']
print(path)
os.environ['MY_VAR']='my value'
my_var=os.environ['MY_VAR']
print(my_var)