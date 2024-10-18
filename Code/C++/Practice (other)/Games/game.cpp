/*
ALL DONE BY ME

Meme Supplier/Owen
*/

// Includes necessary dependencies
#include <iostream> // (Input / output)
#include <string> // string
#include <cmath> // Needed for sqrt() and round()

// Prevents using "std::" a ton
using namespace std;

int done() {
    // Prompts the user to restart the program
    cout << "\n\nType something and press enter to exit\n";
    int blank;
    cin >> blank;

    return 0;
}

int listavailablegames() {
    // Lists the available games
    cout << "Math Quiz\n";
    cout << "Guess the Number\n";
    cout << "Random Number Generator\n";
    cout << "Hypotenuse Calculator\n";
    cout << "Rock Paper Scissors\n";
    cout << "Word Creator\n";
    cout << "Tempature Calculator\n";
    cout << "Word Guesser\n\n";

    return 0;
}

int main() {
    
    cout << "What game do you want to play?\n\nAvailable games:\n\n";
    listavailablegames(); // Lists the available games
    string answer;
    getline(cin, answer);
    
    if (answer == "Math Quiz") { // If you type "Math Quiz", the math quiz game is selected
        // Resets the random number data
        srand(time(0));
        
        cout << "\n\nSelect category!\n\n";
        // Lists the operators available
        cout << "Addition (+)\nSubtraction (-)\nMultiplication (*)\nDivision (/)\n\n";
        string answer;
        cin >> answer;

        /*
        THESE NOTES WILL CARRY ON OVER THE OTHER OPERATORS
        
        I DON'T FEEL LIKE TYPING THESE NOTES OVER AND OVER AGAIN
        */
        
        if (answer == "Addition") { // If addition is chosen
            // ******Declare variables******
            // Generates 2 random numbers in between 0 and 100
            int number1 = rand() % 100;
            int number2 = rand() % 100;
            
            // Declares the "answer" variable
            int answer;

            cout << number1 << "+" << number2 << "\n";
            cin >> answer;
            
            // If your answer equals the sum of number1 and number 2, you win.
            if (answer == (number1 + number2)) {
                cout << "\nYou won!";
                done();
            }
            
            // Otherwise, you lose.
            else {
                cout << "\nYou lost!";
                done();
            }
            
        }
        
        else if (answer == "Subtraction") {
            
            int number1 = rand() % 100;
            int number2 = rand() % 100;
    
            int answer;
            cout << number1 << "-" << number2 << "\n";
            cin >> answer;
            
            if (answer == (number1 - number2)) {
                cout << "\nYou won!";

                done();
            }
            
            else {
                cout << "\nYou lost!";

                done();
            }
            
        }
        
        else if (answer == "Multiplication") {
            
            int number1 = rand() % 100;
            int number2 = rand() % 100;
    
            int answer;
            cout << number1 << "*" << number2 << "\n";
            cin >> answer;
            
            if (answer == (number1 * number2)) {
                cout << "\nYou won!";

                done();
            }
            
            else {
                cout << "\nYou lost!";

                done();
            }
            
        }    
        
        else if (answer == "Division") {
            
            int number1 = rand() % 100;
            int number2 = rand() % 100;
    
            int answer;
            cout << number1 << "/" << number2 << "\n";
            cin >> answer;
            
            if (answer == (number1 / number2)) {
                cout << "\nYou won!";

                done();
            }
            
            else {
                cout << "\nYou lost!"; 

                done();
            }
            
        } 
        
        else { // If you didn't select a valid operator
            cout << "Invalid! Restart the project!\nYou did not read the list of available operators.";
        }
    }
    
    else if (answer == "Guess the Number") {
        srand(time(0)); // Resets the random numbers
        
        // Asks the user what they want the highest number to be
        cout << "\n\nType the highest number.\n";
        int highest;
        cin >> highest;
        
        // Sets the number you have to guess to a random number
        int number = rand() % highest;
        
        // Prompts the user to guess the number between 0 and the highest number they chose
        cout <<"\n\nI'm thinking of a number between 0 and " << highest << ".\n";
        int answer;
        cin >> answer;
        
        // If you guessed the number correctly
        if (answer == number) {
            // If the number you had to guess was 69
            if (number == 69) {
                cout << "You win! The number was 69! (nice)";
                done();
            }

            // Otherwise, you get a normal win.
            else {
                cout << "You win! The number was " << number; 
                done();
            }
        }
        
        // If you didn't guess the number correctly, you lose.
        else {
            cout << "You lose. The number was " << number << ".";
            done();
        }
    
    }
    
    // If the Random Number Generator is selected
    else if (answer == "Random Number Generator") {
        srand(time(0)); // Resets the random numbers
        
        // Prompts user to input the highest number
        cout << "\n\nHighest number: \n";
        int highest;
        cin >> highest;
        
        // Sets the highest number to a random number
        // Generates a number in between 0 and the highest number
        int number = rand() % highest;
        
        // Displays the generated number
        cout << "Number: \n\n" << number;
        
    }
    
    else if (answer == "Hypotenuse Calculator") {
        // Declare the 2 side variables
        int x;
        int y;

        cout << "\n*****Hypotenuse Calculator*****"; // Where the program starts
        
        // Prompts the user to enter X
        cout << "\n\nEnter X: ";
        cin >> x;
        
        // Prompts the user to enter Y
        cout << "\nEnter Y: ";
        cin >> y;
        
        // Sets the Z variable to the square root of x + y
        double z = sqrt(x+y);
        
        // Outputs the result
        cout << "\nThe hypotenuse is: " << z << ".";

        cout << "\n*******************************"; // End
        done();
    }

    else if (answer == "Rock Paper Scissors") {
        // resets the random numbers
        srand(time(0));

        // Generates a random number, which determines if the CPU chose Rock, Paper, or Scissors.
        int botanswer = rand() % 2;
        
        /*
        Key:

        0 = Rock
        1 = Paper
        2 = Scissors
        */

        // Prompts the user to select Rock, Paper, or Scissors
        cout << "\nType Rock, Paper, or Scissors.\n";
        string response;
        cin >> response;

        // If the user inputs "Rock"
        if (response == "Rock") {
            switch(botanswer) { // prevents multiple else-ifs
                case 0: // User selects "Rock", CPU selects "Rock" (Tie)
                    cout << "\nTie!";
                    done();
                    break;
                case 1: // User selects "Rock", CPU selects "Paper" (Lose)
                    cout << "\nYou lose!";
                    done();
                    break;
                case 2: // User selects "Rock", CPU selects "Scissors" (Win)
                    cout << "\nYou win!";
                    done();
                    break;
                default: // If the user doesn't select Rock, Paper, or Scissors. Prompts user to restart the script.
                    cout << "\nInvalid! Please restart the project!";
                    done();
            }
        }

        else if (response == "Paper") { // If the user inputs "Paper"
            switch(botanswer) { // Prevents multiple else-ifs
                case 0: // User selects "Paper", CPU selects "Rock" (Win)
                    cout << "\nYou Win!";
                    done();
                    break;
                case 1: // User selects "Paper", CPU selects "Paper" (Tie)
                    cout << "\nTie!";
                    done();
                    break;
                case 2: // User selects "Paper", CPU selects "Scissors" (Lose)
                    cout << "\nYou lose!";
                    done();
                    break;
                default: // If the user doesn't select Rock, Paper, or Scissors. Prompts user to restart the script.
                    cout << "\nInvalid! Please restart the project!";
                    done();
            }
        }

        else if (response == "Scissors") { // If the user selects "Scissors"
            switch(botanswer) { // Prevents multiple else-ifs
                case 0: // User selects "Scissors", CPU selects Rock (Lose)
                    cout << "\nYou lose!";
                    done();
                    break;
                case 1: // User selects "Scissors", CPU selects Paper (Win)
                    cout << "\nYou win!";
                    done();
                    break;
                case 2: // User selects "Scissors", CPU selects Scissors (Tie)
                    cout << "\nTie!";
                    done();
                    break;
                default: // If the user doesn't select Rock, Paper, or Scissors. Prompts user to restart the script.
                    cout << "\nInvalid! Please restart the project!";
                    done();
            }
        }

        else {
            // If the user doesn't input "Rock", "Paper", or "Scissors", the script will prompt the user to restart.
            cout << "\n\nInvalid input! Please try again!";
            done();
        }
    }
    
    // If "Word Creator is selected"
    else if (answer == "Word Creator") {
        // Declares strings
        string wordtype;
        string word;

        cout << "****** Word_Creator *******"; // Start

        // Prompts the user what they want the word type to be
        cout << "\nWhat type of word do you want your word to be?\n";

        cout << "\nNoun";
        cout << "\nAdjective";
        cout << "\nVerb\n\n";
        cin >> wordtype;

        // Prompts the user for a word
        cout << "\nType the stupid word you wanna use\n";
        cin >> word;
        
        if (wordtype == "Noun") { // If your word is an Adjective
            string name;

            // Asks if the word is a name
            cout << "\nIs your word a name?\n";
            cout << "Y or N\n";
            cin >> name;

            if (name == "Y" || "y") { // If it is a name
                cout << "\n" << word << " ate some pizza.";
                done();
            }

            if (name == "N" || "n") { // If it is not a name
                cout << "\nThe " << word << " ate some pizza.";
                done();
            }
            
            else {
                // If the user doesn't input Y or N. Prompts user to restart the script
                cout << "Not a valid response!";
                done();
            }
        }

        else if (wordtype == "Adjective") { // If your word is an Adjective
            cout << "\nYou are so " << word << " man";
            done();
        }

        else if (wordtype == "Verb") { // If your word is a Verb
            cout << "\nI " << word << "ed. It was kinda boring.";
            done();
        }

        else { // If you didn't type "Adjective", "Verb", or "Noun". Prompts user to restart the script.
            cout << "Invalid word type!";
            done();
        }

        cout << "**************************"; // End of script

    }
    
    // If the user selects the Tempature Calculator
    else if (answer == "Tempature Calculator") {
        // Declares the 2 variables
        double temp;
        char unit;

        cout << "\n***** Tempature converter *****\n\n"; // Beginning

        // Asks if your unit will be F (Fahrenheit) or C (Celsius)
        cout << "F = Fahrenheight\nC = Celsius\n\n";
        cout << "What unit would you like to convert to?\n";
        cin >> unit;

        if (unit == 'F' || unit == 'f') { // If Fahrenheit is chosen
            // Prompts the user to input the tempature (in Celsius) they want to convert into Fahrenheit
            cout << "\nEnter the tempature in celsius\n";
            cin >> temp;

            // Does the math to convert
            temp = (1.8 * temp) + 32.0;

            // Outputs in the resulting tempature
            cout << "\nThe tempature is: " << temp << " degrees Fahrenheight.";

            done();
        }

        else if (unit == 'C' || unit == 'c') { // If Celsius is chosen
            // Prompts the user to input the tempature (in Fahrenheit) they want to convert into Celsius
            cout << "\nEnter the tempature in Fahrenheight\n";
            cin >> temp;
            // Does the math to convert
            temp = (temp - 32) / 1.8;

            // Outputs the result (Tempature in Celsius)
            cout << "\nThe tempature is: " << temp << " degrees Celsius.";
            done();
        }

        else { // If the user didn't provide an available unit
            cout << "\nYou didn't type a valid response!";
            done();
        }

        cout << "\n\n*******************************"; // End 
        }
    
    // If Word Guesser is chosen
    else if (answer == "Word Guesser") {
        srand(time(0)); // Resets the random number

        // Declares variables
        string word;
        string response;
        int wordset = rand() % 10; // Each number represents a word
        
        switch(wordset) { // Available words that represent a number, also prevents multiple else-ifs
            case 0:
                word = "cheese";
                break;
            case 1:
                word = "green";
                break;
            case 2:
                word = "flag";
                break;
            case 3:
                word = "chair";
                break;
            case 4:
                word = "floor";
                break;
            case 5:
                word = "table";
                break;
            case 6:
                word = "whiteboard";
                break;
            case 7:
                word = "computer";
                break;
            case 8:
                word = "technology";
                break;
            case 9:
                word = "applesauce";
            default: // This doesn't do anything, but is needed for the code to work
                break;
        }
        
        // Actual program starts
        cout << "\nWord Guesser!\n\n";
        
        // Prompts the user to guess a word
        cout << "Guess the word! ONE CHANCE ONLY!!!\n";
        cout << "Words: cheese, green, flag, chair, floor, table, whiteboard, computer, technology, applesauce.\n"; // Available words
        cin >> response;

        // If you guessed correctly
        if (response == word) {
            cout << "\nYou guessed the letter!\n";
        }

        // If you didn't guess correctly
        else {
            cout << "\nYou guessed poorly. The word was: " << word << ".\n";
        }
        
        // Either way you are prompted to restart the program.
        done();
    }

    else { // If you didn't choose an available game.
        cout << "\nInvalid Input! Please try again!";
        done();
    }
    
    return 0;
}

// Copyright 2024 (Owen/Meme Supplier)