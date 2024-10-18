# Run the command
#subprocess.run(['command'], shell = True)

import subprocess
import platform
ostype = platform.system()
def close():
    print()
def invalidinput():
        print("\nInvalid input! Please restart the script.")

if ostype == 'Linux':

    print("\nLinux Gaming Setup Utility v0.1.5")
    print("Version: " , ostype , "\n\nNote: These package installers use flatpak.\n\nPress enter to continue.")
    input("")

    #Install Steam ****************************************************************************************************

    print("\nWould you like to install steam?\nY or N\n")
    response = input("")
    
    if response == 'Y':
        subprocess.run(['flatpak install steam'], shell = True)
        print("\nWould you like to install the custom proton (GE Proton)?\nY or N\n")
        response = input("")

        if response == 'Y':

            subprocess.run(['wget https://github.com/GloriousEggroll/proton-ge-custom/releases/download/GE-Proton9-15/GE-Proton9-15.tar.gz'], shell = True)
            subprocess.run(['mkdir ~/.steam/root/compatibilitytools.d'], shell = True)
            subprocess.run(['cd ~/Downloads'], shell = True)
            subprocess.run(['tar -xf GE-Proton*.tar.gz -C ~/.steam/root/compatibilitytools.d/'], shell = True)

            print("You will most likely need to restart steam manually.\nPress enter to continue.\n")
            input()
    
    #Install Wine *****************************************************************************************************

    print("\nDo you want to install Wine?\nY or N\n")
    response = input("")

    if response == 'Y':
        subprocess.run(['sudo apt install wine'], shell = True)
    
    #Install Discord **************************************************************************************************

    print("\nDo you want to install Discord?\nY or N\n")
    response = input("")

    if response == 'Y':
        subprocess.run(['flatpak install discord'], shell = True)

    #Install OBS ******************************************************************************************************

    print("\nDo you want to install OBS?\nY or N\n")
    response = input("")

    if response == 'Y':
        subprocess.run(['flatpak install obs'], shell = True)

    #Install screenfetch **********************************************************************************************

    print("\nWould you like to install Screenfetch?\nY or N\n")
    response = input("")

    if response == 'Y':
        subprocess.run(['sudo apt install screenfetch'], shell = True)

    #Install Spotify **************************************************************************************************

    print("\nWould you like to install Spotify?\nY or N\n")
    response = input("")

    if response == 'Y':
        subprocess.run(['flatpak install spotify'], shell = True)

    #Install Lutris ***************************************************************************************************

    print("Would you like to install Lutris?\nY or N\n")
    response = input("")

    if response == 'Y':
        subprocess.run(['flatpak install lutris'], shell = True)
    
    print("Would you like to install ?\nY or N\n")
    response = input("")

    print("Would you like to install drivers? (Reccommended)")

    if response == 'Y':
        try:
            subprocess.run(['driver-manager'], shell = True)
        except:
            print("Error! Please open the driver manager manually!")

    print("Done! Check the repo occasionally for new updates!")

else:
    print("This script is for Linux machines only, hence the name.")