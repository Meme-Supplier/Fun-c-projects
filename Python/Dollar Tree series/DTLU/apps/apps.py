import subprocess, os

def main():
    # List categories
    print("\nApp installing\nCategories:\n")
    print("Games\nProgramming and Development\nUtilities\n")

    r = input("")

    if r == 'Games':
        def games():    
            print("Steam")
            print("\nSober (Unofficial Roblox Client, you will need an apk.)\n")
            print('Turbowarp (Offline, unofficial client with more features)\n')
            print("Lutris\n")

            r = input("")

            if r == 'Steam':
                subprocess.run(['flatpak install steam'], shell = True)

        games()
main()