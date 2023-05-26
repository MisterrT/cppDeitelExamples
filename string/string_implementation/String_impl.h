#ifndef STRING_H
#define STRING_H

#include<iostream>

using namespace std;

class String{
    friend ostream &operator<<(ostream &out, const String &str);
    friend istream &operator>>(istream &in, String &str);

    public:
        /*Costruttore*/
        String(char* str);
        /*Costruttore di copia*/    
        String(const String &str);
        /*Distruttore*/    
        ~String();

        bool operator==(const String &rightStr) const;

        bool operator!=(const String &rightStr) const{
            return !(*this==rightStr);
        }

        bool operator<(const String &rightStr) const;

        bool operator>(const String &rightStr) const {
            return rightStr < *this;
        }

        bool operator>=(const String &rightStr) const{
            return !(*this < rightStr);
        }

        bool operator<=(const String &rightStr) const{
            return !(rightStr < *this);
        }

        String &operator=(const String &str);

        char &operator[](const int idx);

        char operator[](const int idx) const;

        String operator()(const int start, const int end) const;

        int getStrSize() const{
            return size;
        }

        String &operator+=(const String str);
        
        bool operator!() const;
        
    private:
        char* ptr;
        int size;

        void setStr(const char*);
};

#endif