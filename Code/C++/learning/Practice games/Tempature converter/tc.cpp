#include <iostream>

using namespace std;


int main() {

    double temp;
    char unit;

    cout << "***** Tempature converter *****\n\n"; // Beginning

    cout << "F = Fahrenheight\nC = Celsius\n\n";
    cout << "What unit would you like to convert to?\n";

    cin >> unit;

    if (unit == 'F' || unit == 'f') {
        cout << "\nEnter the tempature in celsius\n";
        cin >> temp;

        temp = (1.8 * temp) + 32.0;

        cout << "\nThe tempature is: " << temp << " degrees Fahrenheight.";
    }

    else if (unit == 'C' || unit == 'c') {
        cout << "\nEnter the tempature in Fahrenheight\n";
        cin >> temp;

        temp = (temp - 32) / 1.8;

        cout << "\nThe tempature is: " << temp << " degrees Celsius."; 
    }

    else {
        cout << "\nYou didn't type a valid response!";
    }

    cout << "\n\n*******************************"; // End

    return 0;
}