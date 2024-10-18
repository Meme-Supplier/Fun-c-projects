#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;
typedef int number_t;

//If using "using" keyword
using text_t = std::string;
using number_t = int;

int main() {

    // typedef = reserved keyword used to create an additional name
    //           (alias) for another data type
    //           New identifier for an existing type
    //           Helps with readability and reduces typos

    //pairlist_t pairlist;: Uses the identifier "pairlist_t" instead of that long string

    text_t firstName = "Owen";
    number_t age = 13;

    std::cout << firstName << "\n";
    std::cout << age;

    return 0;

}