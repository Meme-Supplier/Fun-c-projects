#include <iostream>

int main() {

    std::string name;

    while (name.empty()) {
        std::cout << "Enter your name. ";
        std::getline(std::cin, name);
    }

    std::cout << "Hello " << name << ".\n\n";


    // Basically a forever loop
    while (1 == 1) {
        std::cout << "AHH INFINITE LOOP\n";
    }

    return 0;
}