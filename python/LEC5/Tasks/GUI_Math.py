from tkinter import *
def Sum(x,y):
  return x+y

def Sub(x,y):
    return x-y

def display():
     global v
     global x
     global y
     x=float(entry1.get())
     y=float(entry2.get())
     a=v.get()
     
     #print(a)
     if(a==1):
         res_sum=Sum(x,y)
         label_3.configure(text=res_sum)
     elif(a==2):
         res_sub=Sub(x,y)
         label_3.configure(text=res_sub)  


win=Tk()
win.geometry('300x150')
win.title("Math")
label_1=Label(win,text='Enter Number 1 :')#.grid(row=0,column=0)
label_2=Label(win,text='Enter Number 2 :')#.grid(row=1,column=0)
label_3=Label(win,text="")#.grid(row=2,column=2) #display Result
entry1=Entry(win,width=20)#.grid(row=0,column=2)
entry2=Entry(win,width=20)
entry2.pack()
entry1.pack()
label_1.pack()
label_2.pack()
label_3.pack()


v=IntVar()
Radiobutton(win,text='Sum',variable=v,value=1).pack(anchor=W)#.grid(row=3,column=0)
Radiobutton(win,text='Sub',variable=v,value=2).pack(anchor=W)#.grid(row=4,column=0)
Button(text="Validate",command=display).pack()#.grid(row=3,column=2)

#button=Button(text="Validate",command=Show_Sum_result).grid(row=3,column=2)
 
win.mainloop()
   