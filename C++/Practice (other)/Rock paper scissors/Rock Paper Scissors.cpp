#include <iostream>
#include <string>

using namespace std;

int main () {
    cout << "Rock Paper Scissors"; // Title

   while (1 == 1){ // Starts the loop, makes the game go on forever
    // resets the random numbers
    srand(time(0));

    // Generates a random number, which determines if the CPU chose Rock, Paper, or Scissors.
    int botanswer = rand() % 2;
    /*
    0 = Rock
    1 = Paper
    2 = Scissors
    */

    // Prompts the user to select Rock, Paper, or Scissors
    cout << "\n\nType Rock, Paper, or Scissors.\n";
    string response;
    cin >> response;

    // If the user inputs "Rock"
    if (response == "rock") {
        switch(botanswer) { // prevents multiple else-ifs
            case 0: // User selects "Rock", CPU selects "Rock" (Tie)
                cout << "\nTie!";   
                break;
            case 1: // User selects "Rock", CPU selects "Paper" (Lose)
                cout << "\nYou lose!";
                break;
            case 2: // User selects "Rock", CPU selects "Scissors" (Win)
                cout << "\nYou win!";
                break;
            default: // If the user doesn't select Rock, Paper, or Scissors. Prompts user to restart the script.
                cout << "\nInvalid! Please restart the project!";
        }
    }

    else if (response == "paper") { // If the user inputs "Paper"
        switch(botanswer) { // Prevents multiple else-ifs
            case 0: // User selects "Paper", CPU selects "Rock" (Win)
                cout << "\nYou Win!";
                
                break;
            case 1: // User selects "Paper", CPU selects "Paper" (Tie)
                cout << "\nTie!";
                
                break;
            case 2: // User selects "Paper", CPU selects "Scissors" (Lose)
                cout << "\nYou lose!";
                
                break;
            default: // If the user doesn't select Rock, Paper, or Scissors. Prompts user to restart the script.
                cout << "\nInvalid! Please restart the project!";    
        }
    }

    else if (response == "scissors") { // If the user selects "Scissors"
        switch(botanswer) { // Prevents multiple else-ifs
            case 0: // User selects "Scissors", CPU selects Rock (Lose)
                cout << "\nYou lose!";
                
                break;
            case 1: // User selects "Scissors", CPU selects Paper (Win)
                cout << "\nYou win!";
                
                break;
            case 2: // User selects "Scissors", CPU selects Scissors (Tie)
                cout << "\nTie!";
                
                break;
            default: // If the user doesn't select Rock, Paper, or Scissors. Prompts user to restart the script.
                cout << "\nInvalid! Please restart the project!";
        }
    }

    else {
        // If the user doesn't input "Rock", "Paper", or "Scissors", the script will prompt the user to restart.
        cout << "\nInvalid input! Please try again!";
    }
   }

    return 0;
}