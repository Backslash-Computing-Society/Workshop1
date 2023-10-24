from tkinter import *

#defining root window characteristics
win=Tk()
win.title("Case Convertor")

#function for calculation
def convertor():
    str_main=str(n1_entry.get())
    str_side=""
    for i in str_main:
        if i.isupper()==True:
            str_side+=i.lower()
        elif i.islower()==True:
            str_side+=i.upper()
        else:
            str_side+=i
    output_label.config(text=str_side)

#Creating GUI
n1_label = Label(win, text="Enter String=",bg="white",fg="black")
n1_entry = Entry(win)
add_button = Button(win, text="Convert Cases", command=convertor)
output_label = Label(win, text="", font=("Arial",20))

#GUI Layout
n1_label.grid(row=1,column=0)
n1_entry.grid(row=1,column=1)
add_button.grid(row=2,column=0)
output_label.grid(row=3,column=1)

win.mainloop()