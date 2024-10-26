#include <iostream>

int main() {

    std::string name;

    std::cout << "Enter your Name: ";
    std::getline(std::cin, name);

    //Length of string
    if(name.length() > 18) {
        std::cout << "There is no way your name is that long lmao\n";
    }

    // If the response contains nothing
    else if (name.empty()) {
        std::cout << "Please enter your name!\n";
    }

    else {
        std::cout << "Hello " << name << "\n";
    }

    std::cout << "Enter your Name again: ";
    std::getline(std::cin, name);

    //Clears the response
    name.clear();

    std::cout << "Hello " << name << "\n";

    std::cout << "Enter your Name again: ";
    std::getline(std::cin, name);

    //Adds a string to the response
    name.append("@gmail.com\n");

    std::cout << "Hello " << name;

    std::cout << "Enter your Name again: ";
    std::getline(std::cin, name);

    // Displays the number character character of the output

    /*Examples:
    
    0 = first character
    1 = second character
    2 = third character
    */

    // This example outputs the second character (w)

    std::cout << name.at(1) << "\n";

    // Insert a character at a selected position
    
    std::cout << "Enter your Name again: ";
    std::getline(std::cin, name);

    name.insert(0, "@"); // "0" inputs the character at the beginning
    std::cout << name << "\n";

    // Find a specific character
   
    std::cout << "Enter your Name again: ";
    std::getline(std::cin, name);

    std::cout << name.find('w') << "\n";

    // Erase a portion of a string
      
    std::cout << "Enter your Name again: ";
    std::getline(std::cin, name);

    name.erase(0, 3); // Eliminate the first 3 characters
    std::cout << name << "\n\n";

    return 0;
}