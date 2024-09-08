#include <iostream>

int main() {

    //Switch = alternative to using many else if statements
    //Compares on value against the matching cases

    int month;
    std::cout << "Enter the month (1-12): ";
    std::cin >> month;

    switch(month){
        case 1:
            std::cout << "It is January";
            break;
        case 2:
            std::cout << "It is Febuary";
            break;
        case 3:
            std::cout << "It is March";
            break;
        case 4:
            std::cout << "It is April";
            break;
        case 5:
            std::cout << "It is May";
            break;
        case 6:
            std::cout << "It is June";
            break;
        case 7:
            std::cout << "It is July";
            break;
        case 8:
            std::cout << "It is August";
            break;
        case 9:
            std::cout << "It is September";
            break;
        case 10:
            std::cout << "It is October";
            break;
        case 11:
            std::cout << "It is November";
            break;
        case 12:
            std::cout << "It is December";
            break;
        default:
            std::cout << "Please enter numbers (1-12)";

    }

    char grade;
    std::cout << "\n\nWhat letter grade?: ";
    std::cin >> grade;

    switch(grade){
        case 'A':
            std::cout << "You got an amazing grade!";
            break;
        case 'B':
            std::cout << "You got an good grade!";
            break;
        case 'C':
            std::cout << "You got an alright grade!";
            break;
        case 'D':
            std::cout << "You got an bad grade!";
            break;
        case 'F':
            std::cout << "You got an terrible grade!";
            break;
        default:
            std::cout << "Your grade is probably extremely bad, a grade like A-, or your input is incorrect.";
    }
    return 0;
}