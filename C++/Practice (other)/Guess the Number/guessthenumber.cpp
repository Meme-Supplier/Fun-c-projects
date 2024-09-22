#include <iostream>

int main() {

    srand(time(0));
    int response;
    
    std::cout << "\nWhat do you want your highest number to be? (The higher the number, the harder it is.)\n";
    std::cin >> response;

    int highest = (response + 1);

    int number = rand() % highest;
    int answer;

    std::cout << "Guess the number! (1 through " << highest << ")\n";
    std::cin >> answer;

    if (answer == number) {
        
        std::cout << "You guessed correctly!\n";
        main();
    }

    else {
        std::cout << "\nWrong! The number was " << number << "!\n";
        main();
    }

    return 0;
}