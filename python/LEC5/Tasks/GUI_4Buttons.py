#Create Four Buttons
import tkinter as tk
button_s=tk.Tk()
button_s.title("My Buttons")
button_s.geometry("300x150")
button_1=tk.Button(button_s,text="Button 1")
button_2=tk.Button(button_s,text="Button 2")
button_3=tk.Button(button_s,text="Button 3")
button_4=tk.Button(button_s,text="Button 4")
button_1.grid(row=0,column=2)
button_2.grid(row=1,column=0)
button_3.grid(row=1,column=3)
button_4.grid(row=2,column=2)
button_s.mainloop()