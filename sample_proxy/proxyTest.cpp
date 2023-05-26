#include<iostream>
#include<iomanip>
#include <stdexcept>

#include "interface/Interface.h"

using namespace std;

int main(){
    try{
        Interface obj(5);
        cout << "\nValue obtained via Interface: " << obj.getValue() << endl;
        obj.setValue(9);
        cout << "\nNew value setted via Interface: " << obj.getValue() << endl;
    }
    catch (bad_alloc &ba){
        cout << "\nException: " <<  ba.what() << endl;
    }
    return 0;
}