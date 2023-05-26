/*Il programma prende in input un numero a cinque cifre e restituisce in oputput le cifre che lo compongono, separate tre spazi l'una dall'altra*/
#include <iostream>

using namespace std;

int main(){
    int temp, number1, number2, number3, number4, number5, out1, out2, out3, out4, out5;

    cout << "Inserire un numero a 5 cifre\n";
    cin >> number1;
    temp = number1/10000;
    out1 = temp;
    
    number2 = number1%10000; /*identico a calcolare 'number1 - 10000*out1'*/
    temp = number2/1000;
    out2 = temp;

    number3 = number2%1000; /*identico a calcolare 'number2 - 1000*out2'*/
    temp = number3/100;
    out3 = temp;

    number4 = number3%100; /*identico a calcolare 'number3 - 100*out3'*/
    temp = number4/10;
    out4 = temp;

    number5 = number4%10; /*identico a calcolare 'number4 - 10*out4'*/
    out5 = number5;

    cout << "Il numero immesso è composto dalle seguenti cifre: " << out1 << "   " << out2 << "   " << out3 << "   " << out4 << "   " << out5 << "\n"; 
    
    return 0;
}