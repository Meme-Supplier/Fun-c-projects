#include <iostream>

int main() {
    //The const keyword specifies that a variables value is CONSTant
    // Tells the compiler to prevent anything from modifying it
    //(read-only)
    
    const double PI = 3.14;
    const int LIGHT_SPEED = 299792458;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;

    std::cout << LIGHT_SPEED << "\n";
    std::cout << PI << "\n";
    std::cout << WIDTH << "\n";
    std::cout << HEIGHT;
    
    return 0;
}