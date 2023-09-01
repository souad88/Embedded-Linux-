from tkinter import *
top= Tk()
can=Canvas(top,bg="green",height=400,width=400)
coordinates=100,100,400,200
arc=can.create_arc(coordinates,start=0,extent=150,fill="yellow")
can.pack()
mainloop()