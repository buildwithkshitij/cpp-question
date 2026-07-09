/*
========================================
          C++ Logical Operators
========================================
*/

#include <iostream>
using namespace std;

int main(){
    int a = 8, b = 12;

    cout << (a < 10 && b > 10) << endl; // True
    cout << (a > 10 || b < 10) << endl; // False
    cout << !(a == 8) << endl; // False

    return 0;
}