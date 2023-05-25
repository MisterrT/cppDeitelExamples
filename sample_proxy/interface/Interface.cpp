#include<iostream>
#include<iomanip>

/*L'ordine dei due include successivi è importante!*/
#include "Interface.h" 
#include "../implementation/Implementation.h"

using namespace std;

Interface::Interface(int v){
    cout << "\nConstructor for Interface object" << endl;
    ptr = new Implementation(v);
}

void Interface::setValue(int v){
    ptr->setValue(v);
}

int Interface::getValue() const{
    return ptr->getValue();
}

Interface::~Interface(){
    cout << "\nDestructor for Interface object" << endl;
    delete ptr;
}