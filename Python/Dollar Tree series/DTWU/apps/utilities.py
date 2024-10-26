import os
import webbrowser

def clearscreen():
    os.system('cls') #clears the screen

def utilityselect():
    clearscreen()

    print('Select utility\n')

    # Lists available utilities
    print('[1] Winaero Tweaker')
    print('[2] HiBit Uninstaller')
    print('[3] 7-Zip')
    print('[4] Rufus\n')

    answer = input('Select: ')

    if answer == "1": #Winaero Tweaker selected
        clearscreen()

        print('[1] Download Winaero Tweaker')
        print('[2] Go back')
        print('')

        answer = input("Select: ")

        if answer == "1": # Download Winaero Tweaker

            clearscreen()

            webbrowser.open_new("https://winaerotweaker.com/") #Opens the web browser
            clearscreen()
            utilityselect()

        if answer == "2": #Returns

            clearscreen()
            utilityselect()

    if answer == "2": #Hibit Uninstaller selected
        clearscreen()

        print('[1] Download Hibit Uninstaller')
        print('[2] Go back')
        print('')

        answer = input('Select:')

        if answer == "1": # Download Hibit Uninstaller

            clearscreen()

            webbrowser.open_new("https://www.majorgeeks.com/mg/get/hibit_uninstaller,1.html") #Opens the web browser
            clearscreen()
            utilityselect()

        if answer == "2": #Returns

            clearscreen()
            utilityselect()

    if answer == "3": #7zip selected
        clearscreen()

        print('[1] Download 7-Zip File Manager')
        print('[2] Go back')
        print('')

        answer = input('Select: ')

        if answer == "1": # Download 7zip

            clearscreen()
            print('Choose version')
            print('')
            print('[1] x64')
            print('[2] x86')
            print('[3] ARM64')
            print('')
            print('[4] Restart')
            print('')

            answer = input('Select: ')
            clearscreen()

            if answer == '1':
                webbrowser.open_new("https://www.7-zip.org/a/7z2407-x64.exe") #Opens the web browser
                clearscreen()
                utilityselect()

            if answer == '2':
                webbrowser.open_new("https://www.7-zip.org/a/7z2407.exe") #Opens the web browser
                clearscreen()
                utilityselect()

            if answer == '3':
                webbrowser.open_new("https://www.7-zip.org/a/7z2407-arm64.exe") #Opens the web browser
                clearscreen()
                utilityselect()

            if answer == '4':
                clearscreen()
                utilityselect()

        if answer == "2": #Returns

            clearscreen()
            utilityselect()

    if answer == "4": # Rufus selected
        clearscreen()

        print('[1] Download ')
        print('[2] Go back')
        print('')

        answer = input("Select: ")

        if answer == "1": # Download Rufus
            clearscreen()

            print('Choose version')
            print('')
            print('[1] x64')
            print('[2] x86')
            print('[3] ARM64')
            print('[4] x64 Portable')
            print('')
            print('[5] Restart')
            print('')
            
            answer == input('Select: ')

            if answer == '1':
                webbrowser.open_new("https://github.com/pbatard/rufus/releases/download/v4.5/rufus-4.5.exe") #Opens the web browser
                clearscreen()
                utilityselect()

            if answer == '2':
                webbrowser.open_new("https://github.com/pbatard/rufus/releases/download/v4.5/rufus-4.5_x86.exe") #Opens the web browser
                clearscreen()
                utilityselect()

            if answer == '3':
                webbrowser.open_new("https://github.com/pbatard/rufus/releases/download/v4.5/rufus-4.5_arm64.exe") #Opens the web browser
                clearscreen()
                utilityselect()

            if answer == '4':
                webbrowser.open_new("https://github.com/pbatard/rufus/releases/download/v4.5/rufus-4.5p.exe") #Opens the web browser
                clearscreen()
                utilityselect()

            if answer == '5':
                clearscreen()
                utilityselect()

        if answer == "2": #Returns

            clearscreen()
            utilityselect()
