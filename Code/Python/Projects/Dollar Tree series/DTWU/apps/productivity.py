import os
import webbrowser

def clearscreen():
    os.system('cls') #clears the screen
    
def invalidinput():
    clearscreen()
    print('Invalid Input\nPress enter to continue')
    input('')

def productivityselect():
    clearscreen()

    print('[1] Notepad ++')
    print('[2] GIMP')
    print('')
    answer = input('Select: ')

    if answer == "1": #Download Notepad++ selected
            
        def notepadplusplus():   
            clearscreen()

            print('[1] Download Notepad++')
            print('[2] Go back')
            print('')

            answer = input("Select: ")

            if answer == "1": # Download Notepad++
                clearscreen()

                print('[1] x64')
                print('[2] x32, x86')
                print('[3] ARM64')
                print('')
                print('[4] Go Back')
                print('')

                answer = input('Select: ')

                if answer == '1': # x64 version chosen
                    clearscreen()

                    print('[1] Installer')
                    print('[2] Portable')
                    print('[3] Mini-portable (7z)')
                    print('')
                    print('[4] Return')
                    print('')

                    answer = input("Select: ")

                    if answer == '1': #Installer selected
                        webbrowser.open_new("https://github.com/notepad-plus-plus/notepad-plus-plus/releases/download/v8.6.7/npp.8.6.7.Installer.x64.exe") #Opens the web browser
                        clearscreen()
                        productivityselect()


                    elif answer == '2': # Portable options
                        clearscreen()

                        print('[1] Portable zip')
                        print('[2] Portable 7z')
                        print('')
                        print('[3] Return')
        
                        answer = input('Select: ')

                        if answer == '1':
                            webbrowser.open_new("https://github.com/notepad-plus-plus/notepad-plus-plus/releases/download/v8.6.7/npp.8.6.7.portable.x64.zip") #Opens the web browser
                            clearscreen()
                            productivityselect()

                        elif answer == '2':
                            webbrowser.open_new("https://github.com/notepad-plus-plus/notepad-plus-plus/releases/download/v8.6.7/npp.8.6.7.portable.x64.7z") #Opens the web browser
                            clearscreen()
                            productivityselect()

                        elif answer == '3':
                            clearscreen()
                            productivityselect()
                            


                    if answer == '3': #Mini Portable selected
                        webbrowser.open_new("https://github.com/notepad-plus-plus/notepad-plus-plus/releases/download/v8.6.7/npp.8.6.7.portable.minimalist.x64.7z") #Opens the web browser
                        clearscreen()
                        productivityselect()


                if answer == '2': # x32 Version chosen
                    clearscreen()

                    print('[1] Installer')
                    print('[2] Portable')
                    print('[3] Mini-portable (7z)')
                    print('')
                    print('[4] Return')
                    print('')

                    answer = input("Select: ")

                    if answer == '1': #Installer selected
                        webbrowser.open_new("https://github.com/notepad-plus-plus/notepad-plus-plus/releases/download/v8.6.7/npp.8.6.7.Installer.exe") #Opens the web browser
                        clearscreen()
                        productivityselect()


                    if answer == '2': # Portable options
                        clearscreen()

                        print('[1] Portable zip')
                        print('[2] Portable 7z')
                        print('')
                        print('[3] Return')
        
                        answer = input('Select: ')

                        if answer == '1':
                            webbrowser.open_new("https://github.com/notepad-plus-plus/notepad-plus-plus/releases/download/v8.6.7/npp.8.6.7.portable.zip") #Opens the web browser
                            clearscreen()
                            productivityselect()

                        if answer == '2':
                            webbrowser.open_new("https://github.com/notepad-plus-plus/notepad-plus-plus/releases/download/v8.6.7/npp.8.6.7.portable.7z") #Opens the web browser
                            clearscreen()
                            productivityselect()

                        if answer == '3':
                            clearscreen()
                            productivityselect()
                            


                    if answer == '3': #Mini Portable selected
                        webbrowser.open_new("https://github.com/notepad-plus-plus/notepad-plus-plus/releases/download/v8.6.7/npp.8.6.7.portable.minimalist.7z") #Opens the web browser
                        clearscreen()
                        productivityselect()


                if answer == '3': # ARM64 Version chosen
                    clearscreen()

                    print('[1] Installer')
                    print('[2] Portable')
                    print('[3] Mini-portable (7z)')
                    print('')
                    print('[4] Return')
                    print('')

                    answer = input("Select: ")

                    if answer == '1': #Installer selected
                        webbrowser.open_new("https://github.com/notepad-plus-plus/notepad-plus-plus/releases/download/v8.6.7/npp.8.6.7.Installer.arm64.exe") #Opens the web browser
                        clearscreen()
                        productivityselect()


                    if answer == '2': # Portable options
                        clearscreen()

                        print('[1] Portable zip')
                        print('[2] Portable 7z')
                        print('')
                        print('[3] Return')
        
                        answer = input('Select: ')

                        if answer == '1':
                            webbrowser.open_new("https://github.com/notepad-plus-plus/notepad-plus-plus/releases/download/v8.6.7/npp.8.6.7.portable.zip") #Opens the web browser
                            clearscreen()
                            productivityselect()

                        if answer == '2':
                            webbrowser.open_new("https://github.com/notepad-plus-plus/notepad-plus-plus/releases/download/v8.6.7/npp.8.6.7.portable.7z") #Opens the web browser
                            clearscreen()
                            productivityselect()

                        if answer == '3':
                            clearscreen()
                            productivityselect()
                            


                    if answer == '3': #Mini Portable selected
                        webbrowser.open_new("https://github.com/notepad-plus-plus/notepad-plus-plus/releases/download/v8.6.7/npp.8.6.7.portable.minimalist.7z") #Opens the web browser
                        clearscreen()
                        productivityselect()
                    
                    

                if answer == '4':
                   clearscreen()
                   productivityselect()


            elif answer == "2": #Returns
                clearscreen()
                productivityselect()
            
            else:
                invalidinput()
                notepadplusplus()
        
        notepadplusplus()
    elif answer == '2':
        
        clearscreen()
        
        print('[1] Download GIMP') # Download GIMP
        print('[2] Go back')
        print('')

        answer = input('Select: ')

        if answer == '1': # Gimp download options
            clearscreen()
            
            print('[1] Windows')
            print('[2] macOS')
            print('[3] GNU/Linux (Flatpak)\n')

            print('[0] Return\n')

            answer = input('Select: ')

            if answer == '1': # Windows selected
                clearscreen()

                print('Select download options\n')

                print('[1] BitTorrent')
                print('[2] Setup (.exe)')
                print('[3] Microsoft Store\n')
                
                print('[0] Return\n')

                answer = input('Select: ')

                if answer == '1':
                    webbrowser.open_new("https://download.gimp.org/gimp/v2.10/windows/gimp-2.10.38-setup.exe.torrent") #Opens the web browser
                    clearscreen()
                    productivityselect()

                if answer == '2':
                    webbrowser.open_new("https://download.gimp.org/gimp/v2.10/windows/gimp-2.10.38-setup.exe") #Opens the web browser
                    clearscreen()
                    productivityselect()

                if answer == '3':
                    webbrowser.open_new("ms-windows-store://pdp/?productid=XPDM27W10192Q0") #Opens the web browser
                    clearscreen()
                    productivityselect()

                if answer == '0':
                    clearscreen()
                    productivityselect()

            if answer == '2': # macOS selected
                clearscreen()

                print('[1] Intel systems')
                print('[2] Silicon\n')

                answer = input('Select: ')

                if answer == '1': # Intel systems selected
                    clearscreen()

                    print('[1] BitTorrent')
                    print("[2] Installer? Idk I've never used macOS. (.dmg)\n")
                    
                    answer = input('Select: ')

                    if answer == '1':
                        webbrowser.open_new("https://download.gimp.org/gimp/v2.10/macos/gimp-2.10.38-x86_64-1.dmg.torrent") #Opens the web browser
                        clearscreen()
                        productivityselect()

                    if answer == '2':
                        webbrowser.open_new("https://download.gimp.org/gimp/v2.10/macos/gimp-2.10.38-x86_64-1.dmg") #Opens the web browser
                        clearscreen()
                        productivityselect()

                if answer == '2': # Apple Silicon selected
                    clearscreen()

                    print('[1] BitTorrent')
                    print("[2] Installer? Idk I've never used macOS. (.dmg)\n")

                    print("[0] Return\n")

                    answer = input('Select: ')

                    if answer == '1':
                        webbrowser.open_new("https://download.gimp.org/gimp/v2.10/macos/gimp-2.10.38-arm64-1.dmg.torrent") #Opens the web browser
                        clearscreen()
                        productivityselect()

                    if answer == '2':
                        webbrowser.open_new("https://download.gimp.org/gimp/v2.10/macos/gimp-2.10.38-arm64-1.dmg") #Opens the web browser
                        clearscreen()
                        productivityselect()

                    if answer == '0':
                        clearscreen()
                        productivityselect()
                        
            if answer == '3':
               webbrowser.open_new("https://flathub.org/repo/appstream/org.gimp.GIMP.flatpakref") #Opens the web browser
               clearscreen()
               productivityselect()


            if answer == '0':
                clearscreen()
                productivityselect()

        if answer == '2':
            clearscreen()
            productivityselect()
    
    else:
        invalidinput()
        productivityselect()
        
productivityselect() # Starts the script
