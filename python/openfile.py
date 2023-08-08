#!
namecpp=input("please enter cpp file :")
helloworld='#include<iostream>\nint main(){\nstd::cout<<"hello"<<std::endl;\nreturn 0;\n}'
fd=open(namecpp,"w+")
fd.write(helloworld)
fd.close()    