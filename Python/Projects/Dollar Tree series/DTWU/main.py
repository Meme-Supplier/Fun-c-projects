# main.py

import sys
import os
import platform

ostype = platform.system()

def clearscreen():
    os.system('cls') #clears the screen

def close():
    print('Exiting...')

def main():
    clearscreen()

    print("Dollar tree WinUtil V0.6")
    print("OS:" , ostype , platform.release())
    print('\n')
    print('Choose a tool\n')

    print('[0] Download the real WinUtil\n')

    # Menu selection
    print('[1] Apps')
    print('[2] Windows utilities')
    print('')
    print('[3] Close')
    print('')

    answer = input('Select: ')

    if answer == '0':
        os.startfile("psscripts\\WinUtilInstaller.cmd")
        main()
        
    if answer == '1':
        clearscreen()
        # Add the subfolder to the system path
        sys.path.insert(0, os.path.abspath(os.path.join(os.path.dirname(__file__), 'apps')))

        # Now you can import the module
        import appselection

        # Use the imported function
        print(appselection.apptypeselection())

    elif answer == '2':
        if ostype == 'Windows':
            clearscreen()
            # Add the subfolder to the system path
            sys.path.insert(0, os.path.abspath(os.path.join(os.path.dirname(__file__), 'WindowsUtilities')))

            # Now you can import the module
            import windowsutilities

            # Use the imported function
            print(windowsutilities.clearscreen())
        else:
            print("\nThis tool is available for Windows machines only.")

    elif answer == '3':
        print('Closing...')
        
    else:
        clearscreen()
        print("Invalid input")
        print('Press enter to return')
        input('')
        main()
def osdetection():
    
    if ostype == 'Windows':
        main()

    else:

        print("This project only works on Windows, and I don't even know if it's supported on macOS. I haven't tested out macOS because I don't own one. Let me know if it does support it.")
        print("And this isn't meant for Windows. Please use DTLU (Dollar Tree LinUtil)")
        print('Press enter to close')
        input('')
        
osdetection()
