import random

def main():
    print("What do you want your highest number to be?\n(The higher the number, the harder it is.)")
    highest = input()

    number = random.randint(1 , int(highest))

    print("\nGuess the number! ( 1 through" , int(highest) , ") .")
    answer = input()

    if answer == int(number):
        print("You guessed correctly!")
        main()
        
    else:
        print("Wrong! The answer was " , int(number) , "!\n")
        main()
main()
