#ifndef PHONE_NUM_IMPL
#define PHONE_NUM_IMPL

#include <iostream>

using namespace std;

class PhoneNumber{
        friend ostream &operator<<(ostream &oStr, PhoneNumber &phn);
        friend istream &operator>>(istream &iStr, PhoneNumber &phn);

    public:
        PhoneNumber();
        void setPhoneNumber();
        void getPhoneNumber();

    private:
        int area;
        int exchange;
        int line;
};

#endif