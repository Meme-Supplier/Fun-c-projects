#include <iostream>

int main() {

    // do while loop = do some blocks of code first
    //                 THEN repeat again if condition is true

    int number;

    do {
        std::cout << "Enter a positive number: ";
        std::cin >> number;
    } while (number < 0);

    std::cout << "The positive number is: " << number << "\n";

    return 0;
}