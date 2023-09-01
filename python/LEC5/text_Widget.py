from tkinter import *
window=Tk()
window.title("MY NOTES")
text_window=Text(window,width=40,height=20)
text_window.insert(END,
                   "This my Text for this Year :Iam feeling so happy ,finally i found my self in this feild, I like to work, Cooking, Sports,My Daughter also i love to be busy all my day. ")

text_window.insert(END,"It's My short NOTE.")
text_window.pack()
mainloop()