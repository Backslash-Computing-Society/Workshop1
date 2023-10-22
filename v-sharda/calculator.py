from tkinter import *

#defining root window characteristics
win=Tk()
win.title("2 Number Calculator")


#functions for buttons
def add_num():
    n1=float(n1_entry.get())
    n2=float(n2_entry.get())
    output=n1+n2
    output_label.config(text=output)
def subtract_num():
    n1=float(n1_entry.get())
    n2=float(n2_entry.get())
    output=n1-n2
    output_label.config(text=output)
def product_num():
    n1=float(n1_entry.get())
    n2=float(n2_entry.get())
    output=n1*n2
    output_label.config(text=output)
def divide_num():
    n1=float(n1_entry.get())
    n2=float(n2_entry.get())
    output=n1/n2
    output_label.config(text=output)

#Creating GUI
n1_label = Label(win, text="First Number Input=",bg="white",fg="black")
n1_entry = Entry(win)
n2_label = Label(win, text="Second Number Input=",bg="white",fg="black")
n2_entry = Entry(win)
add_button = Button(win, text="Addition(+)", command=add_num)
subtract_button = Button(win, text="Subtraction(-)", command=subtract_num)
product_button = Button(win, text="Multiplication(*)", command=product_num)
divide_button = Button(win, text="Division(/)", command=divide_num)
output_label = Label(win, text="", font=("Arial",20))

#GUI Layout
n1_label.grid(row=1,column=0)
n2_label.grid(row=1,column=3)
n1_entry.grid(row=1,column=1)
n2_entry.grid(row=1,column=5)
add_button.grid(row=2,column=0)
subtract_button.grid(row=2,column=1)
product_button.grid(row=2,column=3)
divide_button.grid(row=2,column=5)
output_label.grid(row=4,column=2)

win.mainloop()