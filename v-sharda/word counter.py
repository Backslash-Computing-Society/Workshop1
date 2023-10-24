from tkinter import *

#defining root window characteristics
win=Tk()
win.title("Word Counter")

#function for calculation
def c_count():
    str_main=str(n1_entry.get())
    count=0
    a=str_main.split(" ")
    print(a)
    for i in a:
        if i==(""):
            continue
        else:
            count+=1
    output_label.config(text=count)

#Creating GUI
n1_label = Label(win, text="Enter String=",bg="white",fg="black")
n1_entry = Entry(win)
add_button = Button(win, text="Calculate Words", command=c_count)
output_label = Label(win, text="", font=("Arial",20))

#GUI Layout
n1_label.grid(row=1,column=0)
n1_entry.grid(row=1,column=1)
add_button.grid(row=2,column=0)
output_label.grid(row=3,column=1)

win.mainloop()