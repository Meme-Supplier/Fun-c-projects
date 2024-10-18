from tkinter import *

# widgets = GUI elements: buttons, textboxes, labels, images
# windows = serves as a container to hold or contain these widgets

window = Tk() #create an instance of a window
window.geometry("1367x737")
window.title("Hello World!")

# Creates Window icon
#icon = PhotoImage(file='linus.png')
#window.iconphoto(True,icon)

window.config(background="black")

window.mainloop() # displays the window