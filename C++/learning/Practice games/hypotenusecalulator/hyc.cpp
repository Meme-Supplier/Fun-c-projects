#include <iostream>
#include <cmath>

int main() {

    // Angles
    double a;
    double b;
    double c;

    // User input
    std::cout << "Enter side A: "; // Sets side A
    std::cin >> a;

    std::cout << "Enter side B: "; // Sets side B
    std::cin >> b;

    //Calculates the output
    a = pow(a , 2);
    b = pow(b , 2);
    c = sqrt(a + b);

    std::cout << "\nThe hypotenuse of your triangle is " << c << "!\nWanna play again?\n";
    std::string response;
    std::cin >> response;

    if (response == "Yes") {
        main();

        return 0;
    }

    else {
        std::cout << "\nOkay";

        return 0;
    }

    return 0;
}