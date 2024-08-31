#include <iostream>

int main(){

    srand(time(0));
    int number = rand() % 11;
    int answer;

    std::cout << "\nGuess the number! (1 through 10)\n";
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