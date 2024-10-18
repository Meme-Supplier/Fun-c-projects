# main.py
import subprocess
from subprocess import call
import sys
import os
import platform

ostype = platform.system()

def close():
    print('Exiting...')

def main():

    print("\nDollar tree LinUtil V0.2")
    print(ostype , platform.release())
    print('Choose a tool\n')

    print('[0] Download the real LinUtil\n')

    # Menu selection
    print('[1] Apps\n')
    print('[2] Setup your distro for gaming\n')

    print('[3] Close')
    print('')

    answer = input('Select: ')

    if answer == '0':
        subprocess.run(['curl -fsSL https://christitus.com/linux | sh'], shell = True)
        main()

    elif answer == '1':
        # Add the subfolder to the system path
        sys.path.insert(0, os.path.abspath(os.path.join(os.path.dirname(__file__), 'apps')))

        # Now you can import the module
        import apps

        # Use the imported function
        print(apps)
    
    elif answer == '2':
        # Add the subfolder to the system path
        sys.path.insert(0, os.path.abspath(os.path.join(os.path.dirname(__file__), 'scripts')))

        # Now you can import the module
        import lgs

        # Use the imported function
        print(lgs)
        

    elif answer == '3':
        print('Closing...')
        
    else:
        print("\nInvalid input")
        print('Press enter to return')
        input('')
        main()
        
def osdetection():
    if ostype == 'Linux':
        def finstalled():
            print("Do you have flatpak installed?\nY or N")
            r = input("")
            if r == 'Y' or r == 'y':
                main()
            elif r == 'N' or r == 'n':
                try:
                    subprocess.run(['sudo apt install flatpak'], shell = True)
                    main()
                except:
                    print("Error! Please try going to 'https://flatpak.org/setup/'!")
        finstalled()

    else:
        print("This project only works on Linux, and I don't even know if it's supported on macOS. I haven't tested out macOS because I don't own one. Let me know if it does support it.")
        print("And this isn't meant for Linux. Please use DTWU (Dollar Tree WinUtil)")
        print('Press enter to close')
        input('')
        
osdetection()
