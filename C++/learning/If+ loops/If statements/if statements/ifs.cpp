#include <iostream>

int main(){

    //if statements = do something if a condition is true. If not, then don't do it.    

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age >= 18){
        std::cout << "Well hello there Mr. " << age << " year old. What's up?";
    }

    else if(age < 0) {
        std::cout << "Blud";
    }

    else if (age == 17) {
        std::cout << "Blud you aren't quite 18 yet";
    }
    
    else if (age > 100) {
        std::cout << "You need help dying? I gotchu";
    }

    else {
        std::cout << "Imagine not being above 18 bozo";
    }

    return 0;
}