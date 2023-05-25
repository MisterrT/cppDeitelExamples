#include "DivideByZeroException.h"

void DivideByZeroException::setMsg(const char s[]){
    int i;
    for(i = 0; i < size; i++){
        errMsg[i] = s[i];
    }
    errMsg[i+1] = '\0';
}

char* DivideByZeroException::what(){
    return errMsg;
}