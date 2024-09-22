#include <iostream>

int main() {

    // type conversion = converts a value of one data type to another
    //                 Implicit = automatic
    //                 Explicit = Precede value with new data type (int)

    //int x = 3.14; (Outputs 3)
    //double x = (int) 3.14; // Also outputs 3
    //double x = 3.14; //Outputs 3.14

    //std::cout << x << "\n";

    char x = 100; //Outputs d (refer to the ASCII table)
    std::cout << x << "\n";

    std::cout << (char)100 << "\n"; //Also outputs d

    //Example

    int correct = 8;
    int questions = 10;

    //Incorrect:
    //double score = correct/questions * 100; (Will output 0%)
    
    //Correct
    double score = correct/(double)questions * 100;

    std::cout << score << "%" << "\n";

    return 0;

}