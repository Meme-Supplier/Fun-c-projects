import os
import webbrowser

def clearscreen():
    os.system('cls') #clears the screen

print('Windows Utility select\n\n')
print('[0] Back to select screen (Not working)')
print('')    
print('[1] Corrupt Windows installation')
print('')


answer = input('Select: ')

if answer == '1':
    clearscreen()

    print('')
    print('[1] DISM')
    print('[2] SFC')
    print('[3] Both\n')

    answer = input('Select: ')

    if answer == '1':
        os.startfile ('Corrupt Windows Installation\\DISM.cmd.lnk')
        clearscreen()

    if answer == '2':
        os.startfile ("Corrupt Windows Installation\\SFC.cmd.lnk")
        clearscreen()

    if answer == '3':
        os.startfile ("Corrupt Windows Installation\\Both.cmd.lnk")
        clearscreen()
    
