from tkinter import *
import os


window = Tk()
window.title("Labels")

# adds text
label = Label(window,
              text="Hello World!", # Text contents
              font=("Arial",40,'bold'), # Appearence (font, size, bold)
              fg='green', # font color
              bg='black', # font background color
              relief=SUNKEN, # Border facing in/out (SUNKEN/RAISED)
             #relief=RAISED,
              bd=10, # Border size
              #Add space between text and border
              padx=20,
              pady=20,)

label.pack()
# Place text in a specific spot
#label.place(x=0,y=0)

window.mainloop() 