from tkinter import *
window=Tk()
window.geometry("200x200")
scale_window=Scale(window,from_=0,to=100,orient=HORIZONTAL)
scale_window.set(30)
scale_window.pack()
mainloop()
