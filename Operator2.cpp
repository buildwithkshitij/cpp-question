#include <iostream>
using namespace std;

int main(){

    bool exp1=true;
    bool exp2=false;

    cout<< "Logical AND: " << (exp1 && exp2) << endl; // False
    cout<< "Logical OR: " << (exp1 || exp2) << endl; // True
    cout<< "Logical NOT: " << (!exp1) << endl; // False
    cout<< "Logical NOT: " << (!exp2) << endl; // True

    return 0;
}