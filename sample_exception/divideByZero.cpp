#include<iostream>
#include "divideByZero_implementation/DivideByZeroException.h"

using namespace std;

double quotient(int n1, int n2){
    if(n2 == 0){
        throw DivideByZeroException{"attempted to divide by zero"};
    }
    else{
        return static_cast <double> (n1)/n2;
    }
}

int main(){
    int num1;
    int num2;
    double result;
    cout << "\nInsert two integers or EOF to quit" << endl;
    while(cin >> num1 >> num2){
        try{
            result = quotient(num1,num2);
            cout << "\nQuotient of num1 and num2 is equal to: " << result << endl; 
        }

        catch(DivideByZeroException &divideByZeroException){
            cout << "Exception occurred: "  << divideByZeroException.what() << endl;

        }
    }
}