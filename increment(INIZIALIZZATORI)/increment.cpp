#include<iostream>
#include "increment_implementation/Increment.h"

using namespace std;

const char globStr[] {"ciao, \'=\' ridondante se inizializzi con \'{}\'"};

int main(){
    cout << globStr << endl;
    Increment inc(2,4);

    cout << "\nObject before increment: " << endl;
    inc.printCount();

    for(int i = 1; i <= 3; i++){
        cout << "After Increment " << i << endl;
        inc.addIncrement();
        inc.printCount();
    }

    return 0;
}