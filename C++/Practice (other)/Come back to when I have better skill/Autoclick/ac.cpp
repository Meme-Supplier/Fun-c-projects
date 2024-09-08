#include <Windows.h>
#include <iostream>

int main(){
    int y;
    int x;

    std::cout << "Y position\n";
    std::cin >> y;

    std::cout << "X position";
    std::cin >> x;
    
    INPUT Inputs[3] = {1};

    Inputs[0].type = INPUT_MOUSE;
    Inputs[0].mi.dx = (x - (x * 2)); // desired X coordinate
    Inputs[0].mi.dy = (y - (y * 2)); // desired Y coordinate
    Inputs[0].mi.dwFlags = MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_MOVE;

    Inputs[1].type = INPUT_MOUSE;
    Inputs[1].mi.dwFlags = MOUSEEVENTF_LEFTDOWN;

    Inputs[2].type = INPUT_MOUSE;
    Inputs[2].mi.dwFlags = MOUSEEVENTF_LEFTUP;
    SendInput(2, Inputs, sizeof(INPUT));

    return 0;
}