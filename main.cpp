//--------------------------------------------------------
//--------------------------------------------------------
//--------------------------------------------------------
#include <iostream>
#include <windows.h>
using namespace std;
//--------------------------------------------------------
//--------------------------------------------------------
//--------------------------------------------------------
int ShowMouseCoordinate(){
    int ms;
    cin>>ms;
    while (true) {
        POINT p;
        if (GetCursorPos(&p)) {
            std::cout << "X: " << p.x << " Y: " << p.y << std::endl;
        }
        Sleep(ms);
    }
}
//--------------------------------------------------------
//--------------------------------------------------------
//--------------------------------------------------------
int main() {
    int function;
    cin>>function;
    if(function==1){
        ShowMouseCoordinate();
    }
    return 0;
}
//--------------------------------------------------------
//--------------------------------------------------------
//--------------------------------------------------------
