#Warning
print("Warning: If you don't type one of the two options available or mistype the response, The game will break. Be careful.")
print("\n\n\n")
input("Press enter to continue.")

def clearscreen():
    import os
    os.system('cls') #clears the screen

clearscreen()

#story starts
print("You hear a window break downstairs, it woke you up.")
print("(Options: Go downstairs, Stay in bed)")
print("")

answer = input("Response: ")
clearscreen()

if answer == "Go downstairs": #You head downstairs
    print("You head downstairs.")
    print("")
    print("You see a shadowy figure moving around. You are curious on who or what it is.")
    print("(Options: Walk forwards, Walk back upstairs)")
    print("")

    answer = input("Response: ")
    clearscreen()

    if answer == "Walk forwards": #You walk forwards towards the shadowy figure.
        print("You take a few steps forward.")
        print("")
        print("The shadowy figure turns out to be an armed robber! He has a knife and he sees you.")
        print("(Options: Book it, Threaten him)")
        print("")

        answer = input("Response: ")
        clearscreen()

        if answer == "Book it": #You book it
            print("You run away, back upstairs")
            print("")
            print("The intruder also runs upstairs, following you to your room.")
            print("You look back and he is at the stairs.")
            print("(Options: Push him, run and hide)")
            print("")

            answer = input("Response: ")
            clearscreen()

            if answer == "Push him":
                print("You run over and push the intruder down the stairs.")
                print("")
                print("You seem to have knocked the intruder out.")
                print("He lies unconscious on the ground.")
                print("()")
                print("")

                answer = input("Response: ")
                clearscreen()

            if answer == "run and hide":
                print("")

        if answer == "Threaten him": #You threaten the intruder
            print("")

    if answer == "Walk back upstairs": #You say whatever and walk back upstairs
        print("")

if answer == "Stay in bed": #You stay in bed and ignore it.
    print("You stuff your head in the pillow and ignore the noise.")
    print("")
    print("You wake up in the morning and head downstairs.")
    print("")
    print("You notice that a window has been smashed and everything in the fridge has been emptied.")
    print("(Options: Go to your computer, Look around to see if anything else has been stolen)")
    print("")

    answer = input("Response: ")
    clearscreen()
