#ifndef PHNUM_INTERFACE
#define PHNUM_INTERFACE

class PhoneNumber;

class PhoneInterface{
    public:
        PhoneInterface();
        void setPhoneNumber();
        void getPhoneNumber();
    private:
        PhoneNumber *phIntr;
};

#endif