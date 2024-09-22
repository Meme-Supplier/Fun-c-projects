#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int done() {
    cout << "\n\nType something and press enter to exit";
    int blank;
    cin >> blank;

    return 0;
}

int listavailablegames() {
    cout << "Math_Quiz\n";
    cout << "Guess_The_Number\n";
    cout << "Random_Number_Generator\n";
    cout << "Hypotenuse_Calculator\n";
    cout << "Rock_Paper_Scissors\n";
    cout << "Word_Creator\n";
    cout << "Tempature_Calculator\n\n";

    return 0;
}

int main() {
    
    cout << "What game do you want to play?\n\nAvailable games:\n\n";

    listavailablegames();

    string answer;
    cin >> answer;
    
    if (answer == "Math_Quiz") {
        
        srand(time(0));
        
        cout << "\n\nSelect category!\n\n";
        cout << "Addition (+)\nSubtraction (-)\nMultiplication (*)\nDivision (/)\n\n";
        string answer;
        cin >> answer;
        
        if (answer == "Addition") {
            
            int number1 = rand() % 100;
            int number2 = rand() % 100;
    
            int answer;
            cout << number1 << "+" << number2 << "\n";
            cin >> answer;
            
            if (answer == (number1 + number2)) {
                cout << "\nYou won!";

                done();
            }
            
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
        
        else {
            cout << "Invalid! Restart the project!\nYou did not read the list of available operators.";
        }
    }
    
    else if (answer == "Guess_The_Number") {
        srand(time(0));
        
        cout << "\n\nType the highest number.\n";
        int highest;
        cin >> highest;
        
        int number = rand() % highest;
        
        cout <<"\n\nI'm thinking of a number between 1 and " << highest << ".\n";
        int answer;
        cin >> answer;
        
        if (answer == number) {
            if (number == 69) {
                cout << "You win! The number was 69! (nice)";
                
                done();
            }

            else {
                cout << "You win! The number was " << number; 

                done();
            }
        }
        
        else {
            cout << "You lose. The number was " << number << ".";

            done();
        }
    
    }
    
    else if (answer == "Random_Number_Generator") {
        srand(time(0));
        
        cout << "\n\nHighest number: \n";
        int highest;
        cin >> highest;
        
        int number = rand() % highest;
        
        cout << "Number: \n\n" << number;
        
    }
    
    else if (answer == "Hypotenuse_Calculator") {
        int x;
        int y;
        
        cout << "\nEnter X: ";
        cin >> x;
        
        cout << "\nEnter Y: ";
        cin >> y;
        
        double z = sqrt(x+y);
        
        cout << "\nThe hypotenuse is: " << z << ".";

        done();
    }

    else if (answer == "Rock_Paper_Scissors") {
        srand(time(0));
        int botanswer = rand() % 3;
        string response;

        cout << "\nType Rock, Paper, or Scissors.\n";
        cin >> response;

        // 0 = rock
        // 1 = paper
        // 2 = scissors

        if (response == "Rock") {
            switch(botanswer) {
                case 0:
                    cout << "\nTie!";
                    done();
                    break;
                case 1:
                    cout << "\nYou lose!";
                    done();
                    break;
                case 2:
                    cout << "\nYou win!";
                    done();
                    break;
                default:
                    cout << "\nInvalid! Please restart the project!";
                    done();

            }
        }

        else if (response == "Paper") {
            switch(botanswer) {
                case 0:
                    cout << "\nYou Win!";
                    done();
                    break;
                case 1:
                    cout << "\nTie!";
                    done();
                    break;
                case 2:
                    cout << "\nYou lose!";
                    done();
                    break;
                default:
                    cout << "\nInvalid! Please restart the project!";
                    done();

            }
        }

        else if (response == "Scissors") {
            switch(botanswer) {
                case 0:
                    cout << "\nYou lose!";
                    done();
                    break;
                case 1:
                    cout << "\nYou win!";
                    done();
                    break;
                case 2:
                    cout << "\nTie!";
                    done();
                    break;
                default:
                    cout << "\nInvalid! Please restart the project!";
                    done();

            }
        }

        else {
            cout << "\n\nInvalid input! Please try again!";
            done();
        }
    }

    else if (answer == "Word_Creator") {
        string wordtype;
        string word;

        cout << "\nWhat type of word do you want your word to be?\n";

        cout << "\nNoun";
        cout << "\nAdjective";
        cout << "\nVerb\n\n";
        cin >> wordtype;

        cout << "\nType the stupid word you wanna use\n";
        cin >> word;
        
        if (wordtype == "Noun") {
            string name;

            cout << "\nIs your word a name?\n";
            cout << "Y or N\n";
            cin >> name;

            if (name == "Y" || "y") {
                cout << "\n" << word << " ate some pizza.";
                done();
            }

            if (name == "N" || "n") {
                cout << "\nThe " << word << " ate some pizza.";
                done();
            }
            
            else {
                cout << "Not a valid response!";
                done();
            }
        }

        else if (wordtype == "Adjective") {
            cout << "\nYou are so " << word << " man";
            done();
        }

        else if (wordtype == "Verb") {
            cout << "\nI " << word << "ed. It was kinda boring.";
            done();
        }

        else {
            cout << "Invalid word type!";
            done();
        }

    }

    else if (answer == "Tempature_Calculator") {
        double temp;
        char unit;

        cout << "***** Tempature converter *****\n\n"; // Beginning

        cout << "F = Fahrenheight\nC = Celsius\n\n";
        cout << "What unit would you like to convert to?\n";

        cin >> unit;

        if (unit == 'F' || unit == 'f') {
            cout << "\nEnter the tempature in celsius\n";
            cin >> temp;

            temp = (1.8 * temp) + 32.0;

            cout << "\nThe tempature is: " << temp << " degrees Fahrenheight.";
        }

        else if (unit == 'C' || unit == 'c') {
            cout << "\nEnter the tempature in Fahrenheight\n";
            cin >> temp;

            temp = (temp - 32) / 1.8;

            cout << "\nThe tempature is: " << temp << " degrees Celsius."; 
        }

        else {
            cout << "\nYou didn't type a valid response!";
            done();
        }

        cout << "\n\n*******************************"; // End 
        }
        
        else {
            cout << "\nInvalid Input! Please try again!";
            done();
    }
    
    return 0;
}