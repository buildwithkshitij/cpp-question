/*
========================================
          C++ Assignment Operators
========================================
*/

#include <iostream>
using namespace std;

int main(){
    int x = 10;
    cout << x << endl; // 10

    x += 5; // x = x + 5
    cout << x << endl; // 15

    x -= 3; // x = x - 3
    cout << x << endl; // 12

    x *= 2; // x = x * 2
    cout << x << endl; // 24

    x /= 4; // x = x / 4
    cout << x << endl; // 6

    x %= 2; // x = x % 2
    cout << x << endl; // 0

    return 0;
}