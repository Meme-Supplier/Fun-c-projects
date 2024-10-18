#include <iostream>
#include <cmath>

int main() {

    double x = 3;
    double y = 4;
    double z;

    // Minimum and maximum values

    z = std::max(x , y); // Outputs 4 (maximum value)
    std::cout << z << " (Maximum value)\n";
    
    z = std::min(x , y); // Outputs 3 (minimum value)
    std::cout << z << " (Minumum value)\n";

    
    //pow keyword (x to the power of y)

    z = pow(2 , 3); // Sets z: 2 to the power of 3 (outputs 8)
    std::cout << z << " (2 to the power of 3 = 8)\n";

    
    //Square roots

    z = sqrt(9); // Outputs 3 (Square root of 9 is 3)
    std::cout << z << " (square root of 9 is 3)\n";
    

    // Absolute value

    z = abs(-3); // Outputs 3 (-3 is 3 units from 0)
    std::cout << z << " (3 is 3 units away from 0)\n";


    // Rounding (general) (round)

    double w = 3.14;
    z = round(w); // Outputs 3 (3.14 rounded)
    std::cout << z << " (3 is 3.14 rounded)\n";


    //Rounding 2: (Round up) (ceil)

    double v = 2.45; // Outputs 3 (2.75 rounded up)
    z = ceil(v);
    std::cout << z << " (Rounds 2.75 up to 3)\n";

    //Rounding 3: (Round down) (floor)

    double u = 3.45; // Outputs 3 (3.45 rounded down)
    z = floor(u);
    std::cout << u << " (Rounds 3.45 down to 3)\n";
    
    return 0;
}