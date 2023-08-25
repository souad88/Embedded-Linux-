class Person:
    name=""
    def __int__(self,myname):
        print("hello")
        self.name=myname
    def saywelcome(self):
        print(f"hello{self.name}")
    def __del__(self):
        pass
        #print("byte")
        

Person1=Person("MARY") #instance of the class
Person1.saywelcome()
Person1.remove()    
print("End")    
                
        