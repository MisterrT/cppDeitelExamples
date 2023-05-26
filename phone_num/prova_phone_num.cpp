#include<iostream>
#include<iomanip>

#include "phone_num_inter/PhNumInterface.h"

using namespace std;

int main(){
    PhoneInterface phone;
    cout << "\n";
    phone.getPhoneNumber();
    cout << endl;
    return 0;
}

