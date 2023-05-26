#include"String_impl.h"

using namespace std;

String::String(char* str){}

String::String(const String &str){}

String::~String(){
    delete[] ptr;
}