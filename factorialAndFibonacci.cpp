#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

unsigned long factorial(unsigned long val){
    unsigned long fact;
    if (val <= 1){
        fact = 1;
        return fact;
    }
    else {
        fact = val*factorial( val - 1 );
        return fact;
    }
}

unsigned long fibonacci(unsigned long val){
    unsigned long fib;
    if( (val == 0) || (val == 1) ){
        return val;
    } 
    else {
        fib = fibonacci(val - 1) + fibonacci(val - 2);
        return fib;
    }
}

int main(){
    unsigned long factNum, fibNum;
    factNum = 5;
    fibNum = 30;
    cout << "Factorial of " << factNum << " is: " << factorial(factNum) << endl;
    cout << "Fibonacci of " << fibNum << " is: " << fibonacci(fibNum) << endl;
    return 0;
}