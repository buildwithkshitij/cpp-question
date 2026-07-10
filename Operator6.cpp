/*
==================================================
          C++ Increment & Decrement Operators
==================================================
*/
#include <iostream>
using namespace std;

int main()
{
    int a = 5;

    cout << "Initial value of a: " << a << endl;

    // Pre-Increment
    cout << "Pre-Increment: " << ++a << endl; // Increment first, then use the value
    cout << "Value of a after Pre-Increment: " << a << endl;

    // Post-Increment
    cout << "Post-Increment: " << a++ << endl; // Use the value first, then increment
    cout << "Value of a after Post-Increment: " << a << endl;

    // Pre-Decrement
    cout << "Pre-Decrement: " << --a << endl; // Decrement first, then use the value
    cout << "Value of a after Pre-Decrement: " << a << endl;

    // Post-Decrement
    cout << "Post-Decrement: " << a-- << endl; // Use the value first, then decrement
    cout << "Value of a after Post-Decrement: " << a << endl;

    return 0;
}