#include <iostream>
#include <windows.h>

int main() {
    while (true) {
        POINT cursorPos;
        if (GetCursorPos(&cursorPos)) {
            std::cout << "X: " << cursorPos.x << ", Y: " << cursorPos.y << std::endl;
        }

        Sleep(10);
    }

    return 0;
}

