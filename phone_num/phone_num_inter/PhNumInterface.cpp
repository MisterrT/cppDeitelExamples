#include<iostream>
#include<iomanip>

#include "PhNumInterface.h"
#include "../phone_num_impl/PhoneNumberImpl.h"

PhoneInterface::PhoneInterface(){
    setPhoneNumber();
}

void PhoneInterface::getPhoneNumber(){
    (*phIntr).getPhoneNumber();
}

void PhoneInterface::setPhoneNumber(){
    (*phIntr).setPhoneNumber();
}

