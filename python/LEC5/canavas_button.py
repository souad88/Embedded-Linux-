from tkinter import *
wind=Tk()
wind.geometry('400x400')
title=Label(wind,text="hello",bg="brown")
title.pack()
c=Canvas(wind,width=200, height=200, bg="pink")
c.place(x=50,y=50)
button=Button(wind,text='welcom to tikenter')

button.place(x=65, y=100)
mainloop()