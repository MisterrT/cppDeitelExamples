#include<iostream>
#include<iomanip>

#include "date_implementation/Date.h"

using namespace std;

int main(){
    try{
        Date date1(29,2,1996);
        date1.printDate();
    }
    catch (invalid_argument &e){
        cout << "Exception: " << e.what() << endl;
    }
    
    return 0;
}