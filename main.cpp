#include <iostream>
#include <windows.h>
int main() {
    while (true) {
        POINT p;
        if (GetCursorPos(&p)) {
            std::cout << "X: " << p.x << " Y: " << p.y << std::endl;
        }
        Sleep(10);
    }
    return 0;
}
