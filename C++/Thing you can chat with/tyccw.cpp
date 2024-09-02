#include <iostream>
#include <conio.h> 
#include <stdlib.h>

int main() 
    
    std::cout << "Wanna play a stupid game?\n";
    std::string answer;
    std::cin >> answer; 

    if (answer == "Yeah") {
        system("cls"); 
        std::cout << "Okay! What do you want to play?\n";
        std::cout << "Available Games:\n";
        std::cout << "\nGuess_the_Number";
        std::cout << "\nRock_Paper_Scissors\n\n";
        std::string answer;
        std::cin >> answer;

        if (answer == "Guess_the_Number") { //Guess The Number
               
            srand(time(0));
            system("cls"); 

            std::cout << "Okay!\n";
            int highest;
            std::cout << "\nSelect the highest number\n";
            std::cin >> highest;

            int number = rand() % highest;

            std::cout << "\n\nGuess the number! (1 through " << highest << ".)\n";
            int answer;
            std::cin >> answer;

            if (answer == number){
                std::cout << "You got it!";
                std::cout << "\nType something to quit";
                std::string response;
                std::cin >> response;

            }
            else if (answer == (number - 1)) {
                std::cout << "So close!";
                std::cout << "\nType something to quit";
                std::string response;
                std::cin >> response;
                
            }

            else {
                std::cout << "WRONG! The number was " << number << ".\n";

                std::cout << "\nType something to exit\n";
                std::string answer;
                std::cin >> answer;   
            }
        }

        if (answer == "Rock_Paper_Scissors"){ // RPS
            system("cls");
            std::string response;
            srand(time(0));
            int CPUresponse = rand() % 4;

            std::cout << "Rock Paper Scissors!\n";
            std::cout << "Rock, Paper, or Scissors. \n";
            std::cin >> response;

            // 1 = Rock
            // 2 = Paper
            // 3 = Scissors

            if (response == "Rock") {
                if (CPUresponse = 1) {
                    std::cout << "Tie!";
                    std::cout << "\nType something to quit";
                    std::string response;
                    std::cin >> response;

                    return 0;
                }

                if (CPUresponse = 2) {
                    std::cout << "CPU wins!";
                    std::cout << "\nType something to quit";
                    std::string response;
                    std::cin >> response;
                    return 0;
                }

                if (CPUresponse = 3) {
                    std::cout << "You win!";
                    std::cout << "\nType something to quit";
                    std::string response;
                    std::cin >> response;
                    return 0;
                }
            }

            if (response == "Paper") {
                if (CPUresponse = 1) {
                    std::cout << "You win!";
                    std::cout << "\nType something to quit";
                    std::string response;
                    std::cin >> response;
                    return 0;
                }
                
                if (CPUresponse = 2) {
                    std::cout << "Tie!";
                    std::cout << "\nType something to quit";
                    std::string response;
                    std::cin >> response;
                    return 0;
                }

                if (CPUresponse = 3) {
                    std::cout << "CPU wins!";
                    std::cout << "\nType something to quit";
                    std::string response;
                    std::cin >> response;
                    return 0;
                }
            }

            if (response == "Scissors") {
                if (CPUresponse = 1) {
                    std::cout << "CPU wins!";
                    std::cout << "\n\nType something to quit";
                    std::string response;
                    std::cin >> response;
                    return 0;
                }
                
                if (CPUresponse = 2) {
                    std::cout << "You win!";
                    std::cout << "\nType something to quit";
                    std::string response;
                    std::cin >> response;
                    return 0;
                }

                if (CPUresponse = 3) {
                    std::cout << "Tie!";
                    std::cout << "\nType something to quit";
                    std::string response;
                    std::cin >> response;
                    return 0;
                }
            }
        }
        
    }

    else if (answer == "Nah") {
        std::cout << "okay";
    }

    else{
        main();
    }

    return 0;
}