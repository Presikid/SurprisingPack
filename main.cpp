#include <iostream>
#include <windows.h>
int ShowMouseCoordinate(){
    while (true) {
        POINT p;
        if (GetCursorPos(&p)) {
            std::cout << "X: " << p.x << " Y: " << p.y << std::endl;
        }
        Sleep(10);
    }
 }
int main() {
    ShowMouseCoordinate();
    return 0;
}
