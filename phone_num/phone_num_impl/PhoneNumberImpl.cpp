#include <iostream>
#include<iomanip>

#include "PhoneNumberImpl.h"

using namespace std;

PhoneNumber::PhoneNumber(){
    setPhoneNumber();
}


void PhoneNumber::setPhoneNumber(){
    cout << "\nPlease, insert a phone number in the following format: (123) 456-7890" << endl;
    cin >> *this;
}


void PhoneNumber::getPhoneNumber(){
    cout << "\nPhone Number " << *this << endl;
}


ostream &operator<<(ostream &oStr, PhoneNumber &phn){
    oStr << "("<< phn.area << ")" << " " << phn.exchange << "-" << phn.line;
    return oStr;
}


istream &operator>>(istream &iStr, PhoneNumber &phn){
    iStr.ignore();
    iStr >> setw(3) >> phn.area;
    iStr.ignore();
    iStr >> setw(3) >> phn.exchange;
    iStr.ignore();
    iStr >> setw(4) >> phn.line;
    return iStr;
}


