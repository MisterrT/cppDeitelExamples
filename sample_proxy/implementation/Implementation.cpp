#include<iostream>
#include<iomanip>

#include "Implementation.h"

Implementation::Implementation(int v):
            value(v)
        {
            //
        }

void Implementation::setValue(int val){
    value = val;
}

int Implementation::getValue() const{
    return value;
}