#include<iostream>
#include<iostream>

#include "time_implementation/Time.h"

using namespace std;

int main(){

    Time tap;
    cout << "\nCascaded setHour(), setMin(), setSec() - Standard time: ";
    tap.setHour2(17).setMin2(56).setSec2(12).printStandard();
    cout << "\nCascaded setHour(), setMin(), setSec() - Universal time: ";
    tap.setHour2(17).setMin2(56).setSec2(7).printUniversal();

    cout << "\nCascaded setTime() - Standard time: ";
    tap.setTime2(18,2,0).printStandard();
    cout << "\nCascaded setTime() - Universal time: ";
    tap.setTime2(18,2,0).printUniversal();
    
    return 0;
}