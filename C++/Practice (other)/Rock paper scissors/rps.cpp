#include <iostream>

int main() {

    std::string response;
    srand(time(0));
    int CPUresponse = rand() % 4;

    std::cout << "Rock Paper Scissors!\n";
    std::cout << "Type Rock, Paper, or Scissors. \n";
    std::cout << CPUresponse << "\n";
    std::cin >> response;

    // 1 = Rock
    // 2 = Paper
    // 3 = Scissors

    if (response == "Rock") {
        if (CPUresponse = 1) {
            std::cout << "Tie!";
            return 0;
        }

        if (CPUresponse = 2) {
            std::cout << "CPU wins!";
            return 0;
        }

        if (CPUresponse = 3) {
            std::cout << "You win!";
            return 0;
        }
    }

    if (response == "Paper") {
        if (CPUresponse = 1) {
            std::cout << "You win!";
            return 0;
        }
        
        if (CPUresponse = 2) {
            std::cout << "Tie!";
            return 0;
        }

        if (CPUresponse = 3) {
            std::cout << "CPU wins!";
            return 0;
        }
    }

    if (response == "Scissors") {
        if (CPUresponse = 1) {
            std::cout << "CPU wins!";
            return 0;
        }
        
        if (CPUresponse = 2) {
            std::cout << "You win!";
            return 0;
        }

        if (CPUresponse = 3) {
            std::cout << "Tie!";
            return 0;
        }
    }

    return 0;
}