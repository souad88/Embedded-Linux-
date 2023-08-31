from tkinter import *
def revers_txt(x):
  return x[::-1]


def Show_text():
   global User_text
   User_text= entry.get()
   reverse_=revers_txt(User_text)
   label.configure(text=reverse_)

#Window
win= Tk()
win.geometry("300x150")
win.title("Reverse Text")
#Label to display the Reverse of text
label=Label(win, text="",bg="White", width=20)
label.place(relx = 0.5,rely = 0.3,anchor = 'center')
#Create an Entry to accept User Input
entry= Entry(win, width= 20)
entry.focus_set()
entry.pack()
#Create a Button to validate Entry 
Button(win, text= "Validate",width= 20, command= Show_text).pack(pady=40)
win.mainloop()