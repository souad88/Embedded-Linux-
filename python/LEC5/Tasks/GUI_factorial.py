from tkinter import *
def factorial_(number):
         fact = 1
         for i in range(1, number+1):
              fact = fact * i
         return fact            

def Show_Factorial():
   global number
   number= int(entry.get())
   factorial=factorial_(number)
   label_3.configure(text=factorial)

#Window
win= Tk()
win.geometry("300x300")
win.title("Factorial")
label_1=Label(win,text="Enter an Integer number :")
label_1.grid(row=0,column=0)
#label_1.pack()
label_2=Label(win,text="Factorial :")
label_2.grid(row=1,column=0)
#label_2.pack()
label_3=Label(win, text="",bg="White",width=20)
label_3.grid(row=1,column=1)
#label_3.pack()
#entry of integer number
entry= Entry(win, width= 20)
entry.focus_set()
entry.grid(row=0,column=1)
#entry.pack()

#Create a Button to validate Entry 
Button(win, text= "Validate",width=15, command= Show_Factorial).grid(row=4,column=1)
win.mainloop()