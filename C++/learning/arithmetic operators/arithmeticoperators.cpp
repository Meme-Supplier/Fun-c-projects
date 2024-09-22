#include <iostream>

int main() {

    // arithmetic operators = return the result of a specific arithmetic operation (+ - * /)

    int students = 20;

    // Addition  
    //students += 2; Outputs 22 (Adds 2)
    students += students + 2; // Outputs 42 (Adds students then adds 2)

    std::cout << students << "\n";

    // Subtraction
    //students = students - 1;
    
    students-=1; //Subtracts 1 for students (42 - 1)

    std::cout << students << "\n";

    // Multiplication

    students = students * 2; //Doubles students (41 * 2)
//  students*=2;
    
    std::cout << students << "\n";

    // Division

    students = students / 2; //There are now 41 students (Splits students)
//  students/=2;

    std::cout << students << "\n";

    // Division: Decimals

    double decimal = 3;

    decimal = decimal / 2;

    std::cout << decimal << "\n";

    return 0;

}