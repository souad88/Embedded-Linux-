from tkinter import *
window=Tk()
def open_new_form():
    new_window=Toplevel(window)
    new_window.title("New window")
    new_window.geometry("200x200")
    Label(new_window,text="Welcom in my window!").pack()

label=Label(window,text="Main  window")
label.pack(pady=10) 
button=Button(window,text="Click to open new window",command=open_new_form) 
button.pack(pady=10)  
mainloop()    