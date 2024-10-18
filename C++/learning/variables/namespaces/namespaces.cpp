#include <iostream>

namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}

int main() {
    
    std::cout << second::x; //You can also replace "first" with "second"
//  std::cout << second::x;
    return 0;
}