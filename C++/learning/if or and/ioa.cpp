#include <iostream>

using namespace std;

int main() {

    // && = check if 2 conditions are true
    // || = check if at least one of 2 statements are true
    // ! = reverses the logical state of its operand

    int temp;

    cout << "Enter the tempature: ";
    cin >> temp;

    if (temp > 0 && temp < 30) { // Using && (and)
        cout << "The temperature is good";
    }

    else if (temp <= 0 || temp > 40) { // Using || (or)
        cout << "The tempature is alright";
    }

    else {
        cout << "The temparature is bad";
    }

    bool sunny;

    if (!sunny){ // Using ! (not)
        cout << "\nIt is sunny outside";
    }

    else {
        cout << "\nIt is not sunny outside";
    }

    return 0;
}